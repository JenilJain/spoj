#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		char c;
		long long int n;
		cin>>n;
		long long int count = 0;
		long long int b;
		for(long long int j =0;j<n;j++)
		{
			cin>>b;
			count = (count%n + b%n)%n;
		}
		if(count == 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
} 