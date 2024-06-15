#include<bits/stdc++.h>
using namespace std;
bool linear(int arr[],int n,int x){
	//base case
	if(n==0){
		return false;
	}
	//recursive call
	return linear(arr,n-1,x) || arr[n-1]==x;
	//current work
	
}
int main(){
	int arr[]={1,2,3,4,5,6,6,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=6;
	cout<<linear(arr,n,x);
	return 0;	
}