#include<bits/stdc++.h>
using namespace std;

  int dp[1001];
    int costPrice(vector<int>&cost,int s,int &price)
    {
        if(s== cost.size()||s==cost.size()-1)
        return price;
        if(dp[s]!=-1)return dp[s];
        price+=costPrice(cost,s,cost[s++]);
        return dp[s]=min(price,dp[s]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        int size=cost.size();
        int m1= costPrice(cost,0,cost[0]);
        int m2= costPrice(cost,1,cost[1]);
        return min(m1,m2);

    }


int main()
{
    vector<int>cost;
   cout<< minCostClimbingStairs(cost);
    return 0;
}