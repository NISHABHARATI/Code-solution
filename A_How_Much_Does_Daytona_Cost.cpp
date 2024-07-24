#include<bits/stdc++.h>
using namespace std;
void solution(vector<int>&arr,int k,int n)
{
    unordered_map<int,int>mp;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto it: mp)
    {
        if(it.second>=1 && it.first==k)
        {
            flag=true;
        break;
        }
    }
    if(flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        solution(arr,k,n);
    }
    return 0;
}