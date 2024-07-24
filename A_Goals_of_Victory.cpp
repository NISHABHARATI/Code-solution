#include<bits/stdc++.h>
using namespace std;

void solution(vector<int>arr,int n)
{
    int ans=0,sum1=0,sum2=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<0)
        sum1+=arr[i];
        else if(arr[i]>0)
        sum2+=arr[i];
    }
    ans=(sum1+sum2)*-1;
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n-1);
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
        }
        solution(arr,n);

    }
    return 0;
}