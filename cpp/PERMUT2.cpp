#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n,i;
	while(1)
	{
	    cin>>n;
	    if(n==0) break;
	    int a[n],b[n];
	    for(i=0;i<n;i++) cin>>a[i];
	    for(i=0;i<n;i++) b[a[i]-1] = i+1;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]!=b[i]) break;
	    }
	    if(i==n) cout<<"ambiguous"<<endl;
	    else cout<<"not ambiguous"<<endl;
	}
	return 0;
}