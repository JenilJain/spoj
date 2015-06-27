#include<iostream>
using namespace std;
int main()
{
	int a,b,temp,count;
	while(1)
	{
		cin>>a>>b;
		if(a==-1&&b==-1) break;
		if(a<b){temp=b;b=a;a=temp;}
		if(b==0) {count=a;}
		else if(a%(b+1)==0)
			count = a/(b+1);
		else
			count = (a/(b+1))+1;
		cout<<count<<endl;
	}
	return(0);
} 