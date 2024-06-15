#include<bits/stdc++.h>
using namespace std;
double recursive_power(double x,int n){
	//base case
	if(n==0){
		return 1;
}
	else
	{
   		return x*recursive_power(x,n-1);
	}
	
}
void helper (double x,int n){
	if (n<0){
		n*=-1;
		double ans=recursive_power(x,n);
		cout<<1.0/ans;
	}
	else{
		cout<<recursive_power(x,n);
	}
}
	//recursive call
 
	//current work
	
int main(){
	helper(4,5);
	return 0;	
}