#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {   ll n,m,cnt=6,flag=0,ans=0;
        string x,s;
        cin>>n>>m;
        cin>>x>>s;
        while(cnt--)
        {
            if(x.find(s) != string::npos)//to find the position
            {
                flag=1;
                break;
            }
            ans++;
            x+=x;// concate the string itself
        }
        if(flag==1)
        cout<<ans<<endl;
        else
        cout<<-1<<endl;
     }
    return 0;
}