#include <iostream>
#include <math.h>
using namespace std;
 int a[10001]={0}; 
int count(int n)
{
    if(a[n]!=0) return(a[n]);
    a[n] = count(n-1)+1;
    int p = sqrt(n);
    for(int j =2;j<=p;j++)
    {
        if(n%j==0) a[n]=a[n]+1;
    }
    return(a[n]);
}
 
int main() {
	// your code goes here
	
	a[1] = 1; a[2] = 2;
	int n;
	cin>>n;
	cout<<count(n)<<endl;
	return 0;
}