#include <iostream>
#include<stdio.h>
using namespace std;
 
int power(int a, long long int b)
{
    int c;
    if(b==0) return(1);
    c = power(a,b/2);
    if(b%2==0)
    {
        return ((c*(c%10))%10);
    }
    else
    return (((a%10)*((c*(c%10))%10))%10);
 
}
int main() {
	// your code goes here
	int t,i,l;
	long long int b;
	string a;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    cin>>a;
	    for(l=0;a[l];l++);
	    scanf("%lld",&b);
	    int c = power(int(a[l-1])-48,b);
	    printf("%d \n",c);
	}
	return 0;
}