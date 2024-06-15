#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int count =0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<=(n-i-1);i++){
		arr[i]=(arr[i]+arr[n-i-1])-(arr[n-i-1]=arr[i]);
	}
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}