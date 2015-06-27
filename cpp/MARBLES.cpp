#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
    long long int n,k,i,res,j;
    int t;
    cin>>t;
    for(j=0;j<t;j++)
    {cin>>n>>k; res =1; n =n-1; k=k-1;
    if(k>n-k) k = n-k;
	for(i=1;i<=k;i++)
	{
	    res = res*(n-i+1); res = res/i;
	}
	cout<<res<<endl;
    }
	return 0;
}  