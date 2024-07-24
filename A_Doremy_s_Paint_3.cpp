#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1e9+7
#define PY cout<<"Yes"<<endl;
#define PN cout<<"No"<<endl;
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
using namespace std;

void sol()
{
    int cnt1=0,cnt2=0;
bool flag=false;
 int n;
 cin>>n;
 vector<int>v(n);
 set<int>st;
 for(int i=0;i<n;i++)
 {
    cin>>v[i];
    st.insert(v[i]);
 } 
 sort(begin(v),end(v)); 
 if(st.size()>2)
 flag =false;
else if(st.size()==1)
flag=true;

else{
    for(int i=0;i<n;i++)
    {
        if(v[i]==v[0])cnt1++;
        if(v[i]==v[n-1])cnt2++;
    }
    if(cnt1==cnt2||abs(cnt2-cnt1)==1)
    flag=true;
    else
    flag=false;
}
    if(flag){
    PY;
    }
    else
    {
    PN;
    }
}



int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}