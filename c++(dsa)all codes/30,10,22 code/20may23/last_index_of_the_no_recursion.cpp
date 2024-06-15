#include<bits/stdc++.h>
using namespace std;
int last_index(int arr[], int n ,int x,int s){
	//base case
	if (s==-1){
		return -1;
	}
	//current work
	if (arr[s]==x){
		return s;
	}
	//recursive call
	else return last_index(arr,n,x,s-1);
	
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x;
	x=4;
	cout<<last_index(arr,n,x,n-1);
	return 0;	
}