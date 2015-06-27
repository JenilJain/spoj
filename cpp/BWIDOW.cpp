#include<iostream>
using namespace std;
int main()
{
	int i,t; cin>>t;
	int n;
	for(i=0;i<t;i++)
	{
		cin>>n;
		int max,index,j,r[n],R[n];
		for(j=0;j<n;j++)
		{
			cin>>r[j]>>R[j];
		}
		max = r[0]; index =1;
		for(j=1;j<n;j++)
		{
			if(r[j]>max)
			{
				max = r[j];index = j+1;
			}
		}
		for(j=0;j<n;j++)
		{
			if(max<=R[j] && index!=j+1)
			{
				index = -1;break;
			}
		}
		cout<<index<<endl;
 
	}
} 