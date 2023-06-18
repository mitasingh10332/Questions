
#include<bits/stdc++.h>
using namespace std;


int solveMem(int n, vector<int>&dp)
{
    if(n==0) {
        return 0;
    }
    
    if(dp[n]!=-1) {
        return dp[n];
    }
    
    int ans=n; //max ans made with only squares of 1.
    for(int i=1; i*i<=n;i++)
    {
        int temp=i*i;
        ans=min(ans,1+solveMem(n-temp,dp));
    }
    dp[n]=ans;
    return dp[n];
    
}


class Solution{
	public:
	int MinSquares(int n)
	{
	    // Code here
	    vector<int>dp(n+1,-1);
	    return solveMem(n,dp);
	    
	}
};



-----------------------------------------------------------------------------------------


int solveTab(int n)
{
    
    vector<int>dp(n+1, INT_MAX  );
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j*j<=n;j++)
        
        {   int temp=j*j;
            if(i-temp>=0)
            {dp[i]=min(dp[i],1+dp[i-temp]);}
        }
    }
    return dp[n];
    
}


class Solution{
	public:
	int MinSquares(int n)
	{
	    return solveTab(n);
	    
	}
};

