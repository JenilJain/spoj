#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int b,i,j,l;
    string s;
    while(1)
    {
        cin>>l;
         if(l==0)
            break;
        cin>>s;
        b = s.length();
        for(j=0;j<l;j++)
        {
            i=0;
            cout<<s[j];
            while((i+2*l)<=b)
            {
                i = i+2*l;
                cout<<s[i-j-1];
                if(i+j<b)
                    cout<<s[i+j];
            }
        }
        cout<<"\n";
 
    }
    return 0;
}