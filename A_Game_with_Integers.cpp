#include<bits/stdc++.h>
#define ll long long
#define pb push_back 
using namespace std;
void solution(int n)
{
    int flag1=1;
    bool flag=1;
    int cnt=1;
    while(cnt<10)
    {
    if(flag1)
    {
        if((n+1)%3==0||(n-1)%3==0)
        {
        cout<<"First"<<endl;
        flag=0;
        break;
        }
        else{
            flag1=0;
        }
    }
    else{
        if((n+1)%3!=0||(n-1)%3!=0)
        {
            cout<<"Second"<<endl;
            flag=0;
            break;
        }
        else{
            flag1=1;
        }
    }
    cnt++;
    }
    if(cnt==10 && flag==1)
    cout<<"Second"<<endl;
}
 int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solution(n);
    }
    return 0;
 }