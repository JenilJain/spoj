#include <iostream>
#include<stdio.h>
using namespace std;
 
int power(int a, int b)
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
	int t,i;
	int a,b;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d",&a,&b); 
	    int c = power(a,b);
	    printf("%d \n",c);
	}
	return 0;
}