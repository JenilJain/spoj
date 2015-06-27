#include<stdio.h>
#include<iostream>
 
using namespace std;
 
long long int reverse(long long int n)
{
	long long int rev = 0 ;
	for(;n!=0;)
	{
		rev = rev*10;
		rev = rev + n%10;
		n= n/10;
	}
	return rev;
}
 
int main()
{
	long long int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		long long int a,b;
		cin>>a>>b;
		long long int ra = reverse(a);
		long long int rb = reverse(b);
		long long int c = reverse(ra+rb);
		cout<<c<<endl;
 
	}
} 