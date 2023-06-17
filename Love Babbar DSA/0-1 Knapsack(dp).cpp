#include <bits/stdc++.h> 

int solveMem(vector<int>& weight,vector<int>& value, int index, int capacity, vector<vector<int>>&dp)
{
	if(index==0){
		if(weight[0]<=capacity){ return value[0];}
		else return 0;
	}
	
	if(dp[index][capacity]!=-1){
		return dp[index][capacity];
	}
	
	int include=0;
	if(weight[index]<=capacity)
	{
		include= value[index] + solveMem(weight, value, index-1, capacity-weight[index], dp);

	}
	int exclude = solveMem(weight, value, index-1, capacity, dp);

	dp[index][capacity]= max ( include, exclude);
	return dp[index][capacity]; 
}



int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<vector<int>>dp(n,vector<int>(maxWeight+1,-1));
	return solveMem(weight, value, n-1,maxWeight,dp );
}
