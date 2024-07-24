#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}
int main()
{
    int ans=0;
    int maxi=1;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
                ans=gcd(i,j);
                maxi=max(ans,maxi);
            
        }
    }
        cout<<maxi<<endl;
    }
    return 0;
}