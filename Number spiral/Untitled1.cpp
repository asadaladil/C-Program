#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int a,b;cin>>a>>b;
        if(a%2==0&&b%2==0)
        {
            a>b?cout<<a*a-b+1<<endl:cout<<(b-1)*(b-1)+a<<endl;
        }
        else if(a%2==0&&b%2!=0)
        {
            a>b?cout<<a*a-(b-1)<<endl:cout<<b*b-(a-1)<<endl;
        }
        else if(a%2!=0&&b%2!=0)
        {
            a>b?cout<<(a-1)*(a-1)+b<<endl:cout<<b*b-(a-1)<<endl;
        }
        else if(a%2!=0&&b%2==0)
        {
            a>b?cout<<(a-1)*(a-1)+b<<endl:cout<<(b-1)*(b-1)+a<<endl;
        }
    }
}
