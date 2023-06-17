/*
You are given an array of distinct integers and you have to tell
how many different ways of selecting the elements from the array |
are there such that the sum of chosen elements is equal to the |
target number tar.
*/


#include <bits/stdc++.h> 

int solve(vector<int> &num, int tar, vector<int>&dp)
{
    if(tar==0) return 1;
    if(tar<0) return 0;

    if(dp[tar]!=-1) { return dp[tar];}

    int ans=0;
    for(int i=0; i<num.size();i++)
    {
       ans+= solve( num, tar-num[i],dp); 
    }
    dp[tar]=ans;
    return dp[tar];

}


int findWays(vector<int> &num, int tar)
{
    // Write your code here.
    vector<int>dp(tar+1,-1);
    int ans= solve(num, tar,dp);
    return ans;
}
