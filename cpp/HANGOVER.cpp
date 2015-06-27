#include<iostream>
using namespace std;
int main()
{
	float a;
	while(cin>>a)
	{
		if(a==0.00)
			break;
		else
		{
			int i;
			for(i = 1;;i++)
			{
				a = a - (float)1.00/(float)(i+1);
				if(a<=0.00){cout<<i<<" "<<"card(s)"<<endl;break;}
			}
		}
	}
	return 0;
} 