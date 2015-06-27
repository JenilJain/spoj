#include<iostream>
using namespace std;
int main()
{
    int a;
    long long int count;
    while(1)
    {
        cin>>a;
        count = 0;
        if(a==0)
        {
            break;
        }
        for(int i=1;i<=a;i++)
        {
            count = count+i*i;
        }
        cout<<count<<endl;
    }
    return 0;
}
 