#include<iostream>
using namespace std;
 
int main()
{
    int x,y,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        if(x==y)
        {
            if(x%2!=0)
                cout<<x*2-1<<endl;
            else
                cout<<x*2<<endl;
        }
        else if(x-y==2)
        {
            if(x%2!=0)
                cout<<y*2+1<<endl;
            else
                cout<<y*2+2<<endl;
        }
        else
            cout<<"No Number \n";
 
    }
    return 0;
}