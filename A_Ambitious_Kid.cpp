#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,mini=INT_MAX;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    cin>>arr[i];
    for(auto it:arr)
    {
        mini=min(mini,abs(it));
    }
    cout<<mini<<endl;
}