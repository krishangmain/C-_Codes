#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>dp(10000,vector<int>(10000,-1));
int knapsack(int n , int W, int *wt, int *val){
    if (n==0 || W==0) return 0;
    if(dp[n][W]!=-1)
	{
		return dp[n][W];
	}
    int option1=knapsack(n-1,W,wt,val);
    int option2=0;
    if(W>wt[n-1])        //we have either the last object being included or not 
        {
            option2=knapsack(n-1,W-wt[n-1],wt,val);
        }
    return dp[n][W]= max(option1,option2);
}
int main()
{
    int n;
    cin>>n;
    int val[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>val[i];
    }
    int wt[n];
    for (int i = 0; i < n; i++)
    {
        cin>>wt[i];
    }
    int W;
    cin>>W;

    int answer;
    answer=knapsack(n,W,wt,val);
    cout<<answer;
    
    return 0;
}


