#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,cnt=0;
    cin>>n;
    ll arr[n];
    set<ll>st;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        st.insert(arr[i]);
    }
    vector<long long >v1,v2;
    ll s=st.size();
    if(s==1)
    {
        cout<<"-1"<<endl;
        return;
    }
    else{
        sort(arr,arr+n);
        ll x=arr[n-1];
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            v2.push_back(arr[i]);
            else{
                v1.push_back(arr[i]);
            }
        }
    }
    int a1=v1.size();
    int a2=v2.size();
    cout<<a1<<" "<<a2<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
     }
     cout<<endl;
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