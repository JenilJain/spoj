#include<iostream>
using namespace std;
int main()
{
    long long int t,i,n,j,sum;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        j=5;
        sum=0;
        while(j<=n)
        {
            sum=sum+n/j;
            j=j*5;
        }
        cout<<sum<<endl;
    }
}