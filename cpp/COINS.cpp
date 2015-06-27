#include<iostream>
#include<map>
using namespace std;
 
map<int , long long> arr;
 
long long coin(int n)
{
	if(n==0) return(0);
	if(arr[n]!=0) return(arr[n]);
	long long temp = coin(n/2)+coin(n/3)+coin(n/4);
	if(temp > n)
		arr[n] = temp;
	else
		arr[n] = n;
	return arr[n];
}
 
int main()
{
	int n;
	while(cin>>n) cout<<coin(n)<<endl;
	return 0;
} 