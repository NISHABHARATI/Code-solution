#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(vector<int>&arr,int n)
{
    if(arr[0]!=1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solution(arr,n);
    }
    return 0;
}