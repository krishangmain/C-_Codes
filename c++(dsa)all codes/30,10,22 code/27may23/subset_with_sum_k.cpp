#include<bits/stdc++.h>
using namespace std;
bool subset(int arr[],int k,int n){
	//base case
	if(k==0){
		return true;
	}
	else if(n==0){
		return false;
	}
	else if(k<0){
		return false;
	}
	//recursive call
	bool ans1=subset(arr,k-arr[n-1],n-1);
	bool ans2=subset(arr,k,n-1);
	//current work
	return ans1||ans2;
}
int main(){
	int arr[]={1,2,3,4,5,6,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=20;
	cout<<subset(arr,k,n);
	return 0;	
}