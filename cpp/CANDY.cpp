#include<iostream>
using namespace std;
 
int main()
{
    int n;
    while(1)
    {cin>>n;
    if(n==-1)
        break;
    int arr[n];
    int count =0;
    int c1 =0;
    int b;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        count=count+arr[i];
    }
    if(count%n!=0)
        c1=-1;
    else
    {
        b = count/n;
        for(int i=0;i<n;i++)
        {
            c1 = c1+max(b-arr[i],0);
        }
    }
    cout<<c1<<endl;
    }
    return 0;
}