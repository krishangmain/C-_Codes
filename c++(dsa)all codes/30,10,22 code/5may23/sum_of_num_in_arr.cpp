#include<bits/stdc++.h>
using namespace std;
int sum_of_arr(int arr[],int n){
	//base case
	if(n==0){
		return 0;
	}
	//recursive call
	int x=sum_of_arr(arr, n-1);
	//current work
	return x+arr[n-1];
}
int main(){
	int arr[9]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<sum_of_arr(arr,n);
	return 0;	
}