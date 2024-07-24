#include<bits/stdc++.h>
using namespace std;
int solved(int n,int k)
{
    int sum=0,cnt=0;
    for(int i=1;i<=n;i++)
    {
        sum+=5*i;
        if(sum+k>240)
        break;
        cnt++;
    }
    return cnt;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<solved(n,k);
    return 0;
}