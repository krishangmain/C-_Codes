#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
	if (n==0 || n==1){
		return n;
	}
	vector<int>dp(100000,-1);
	if(dp[n]!=-1)
	{
		return dp[n];
	}
int small = fibonacci(n-1);
int small2 = fibonacci(n-2);
int big = small+small2;
return dp[n]=big;
}
int main(){
	int n =20;
	for(int i=0;i<n;i++){
	cout<<fibonacci(i)<<endl;
}
}