#include<bits/stdc++.h>
using namespace std;
#define r 10
#define c 10
void spiral(int m, int n)
{
    int a[m][n];
    int i,k=0,l=0,cnt=1;;
    while(k<m && l<n)
    { 
        for(i=l;i<n;i++)
        {
            a[k][i]=cnt;
        }
        k++;
    for(i=k;i<m;i++)
    {
        a[i][n-1]=cnt;
    }
    n--;
    if(k<m)
    {
        for(i=n-1;i>=l;--i)
        {
            a[m-1][i]=cnt;
        }
        m--;
    }
    if(l<n)
    {
        for(i=m-1;i>=k;--i)
        {
            for(i=m-1;i>=k;--i)
            {
                a[i][l]=cnt;
            }
            l++;
        }
    }
    cnt++;
    }
    int ans=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            char z;
            cin>>z;
            if(z=='X')
            ans+=a[i][j];
        }
    }
    cout<<ans<<endl;

    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       spiral(r,c);
    }
    return 0;
}