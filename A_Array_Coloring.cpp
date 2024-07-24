 //                        ॐ
 //                     BHOLEBABA
#include <bits/stdc++.h>
#define ll  long long int 
#define lll register long long int
#define frrr(n) for (ll i = 1; i <=(n); i++)
#define fo(n) for(ll i = 0; i < n ; i++)
#define all(a) (a).begin(), (a).end()
#define vi vector<long long int>
#define pi pair<long long, long long>
#define vpll vector<pair<long long,long long>>
#define print(condi,type) cout<<(condi==type? "YES":"NO" )<<endl;
#define sz(s) s.size();
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
// #define mod 1000000007
#define rr return 0
#define in(x) scanf("%lld", &x)
#define pb emplace_back
// #define string Ss; 
using namespace std;
ll N =1e6+10; 

void solve(){   
    int n;
    int cnt=0;
    cin>>n;
    int sum=0;
    vi vec(n);
    fo(n)
    {
        cin>>vec[i];
    }
    fo(n)
    {
        if(vec[i]%2==0)
        sum+=vec[i];
        else
        cnt++;
    }
    if(sum%2==0 && cnt%2==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }



signed main(){
    fio;
  ll testCase=1;
  cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;


}


