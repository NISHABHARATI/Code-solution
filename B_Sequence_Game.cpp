#include<bits/stdc++.h>
using namespace std;
void solution(vector<int>&vec)
{
    vector<int> ans;
    ans.push_back(vec[0]);
    for(int i=1;i<vec.size();i++)
    {
        if(ans.back()<=vec[i])
        {
            ans.push_back(vec[i]);
        }
        else{
            ans.push_back(vec[i]);
            ans.push_back(vec[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        solution(vec);
    }
    return 0;
}