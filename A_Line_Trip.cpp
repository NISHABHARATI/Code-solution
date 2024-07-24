#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1e9+7
#define PY cout<<"yes"<<endl;
#define PN cout<<"no"<<endl;
#define fastread()(ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

int sol()
{
    int n,x;
    cin>>n>>x;
    int maxi=INT_MIN;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans=0;
    sort(begin(v),end(v));
    int j=0;
    for(int i=0;i<v.size();i++)
    {
         maxi=max(maxi,v[i]-j);
         j=v[i];
    }
    int diff=2*abs(v[n-1]-x);
    maxi=max(maxi,diff);
    return maxi;
}

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        cout<<sol()<<endl;
    }
    return 0;
}
