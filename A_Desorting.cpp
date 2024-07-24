#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int ans=1e9;
    for(int i=0;i<n-1;i++)
    {
        if(vec[i+1]<vec[i])
        {
            cout<<"0\n";
            return;
        }
    ans=min(ans,1+(vec[i+1]-vec[i])/2);
    }
    cout<<ans<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
