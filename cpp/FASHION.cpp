#include<iostream>
#include<stdlib.h>
 
using namespace std;
 
int compare(const void *a, const void *b)
{
    return(*(int*)a - *(int*)b);
}
 
int main()
{
    int t,n,count;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        count =0;
        int men[n],wn[n];
        for(int j=0;j<n;j++)
            cin>>men[j];
        for(int j=0;j<n;j++)
            cin>>wn[j];
        qsort(men,n,sizeof(int),compare);
        qsort(wn,n,sizeof(int),compare);
        for(int j=0;j<n;j++)
        {
            count = count+ men[j]*wn[j];
        }
        cout<<count<<endl;
 
    }
}