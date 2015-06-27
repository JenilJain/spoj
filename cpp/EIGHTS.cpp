#include<iostream>
using namespace std;
 
int main()
{
	long long t,i,k;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>k;
		if(k%4 == 1)
		{
			cout<<k/4*1000+192<<endl;
		}
		if(k%4 == 2)
		{
			cout<<k/4*1000+442<<endl;
		}
		if(k%4 == 3)
		{
			cout<<k/4*1000+692<<endl;
		}
		if(k%4 == 0)
		{
			cout<<(k/4-1)*1000+942<<endl;
		}
	}
	return 0;
} 