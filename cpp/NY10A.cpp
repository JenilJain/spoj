#include<iostream>
using namespace std;
 
int main()
{
	int p,i,n,j,c1,c2,c3,c4,c5,c6,c7,c8;
	string s;
	cin>>p;
	for(i=0;i<p;i++)
	{
		c1 = 0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;
		cin>>n;
		cin>>s;
		for(j = 2;j<40;j++)
		{
			if(s[j-2] == 'T' && s[j-1]=='T' && s[j]=='T')
				c1++;
			if(s[j-2] == 'T' && s[j-1]=='T' && s[j]=='H')
				c2++;
			if(s[j-2] == 'T' && s[j-1]=='H' && s[j]=='T')
				c3++;
			if(s[j-2] == 'T' && s[j-1]=='H' && s[j]=='H')
				c4++;
			if(s[j-2] == 'H' && s[j-1]=='T' && s[j]=='T')
				c5++;
			if(s[j-2] == 'H' && s[j-1]=='T' && s[j]=='H')
				c6++;
			if(s[j-2] == 'H' && s[j-1]=='H' && s[j]=='T')
				c7++;
			if(s[j-2] == 'H' && s[j-1]=='H' && s[j]=='H')
				c8++;
		}
		cout<<n<<" "<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" "<<c5<<" "<<c6<<" "<<c7<<" "<<c8<<endl;
	}
	return 0;
} 