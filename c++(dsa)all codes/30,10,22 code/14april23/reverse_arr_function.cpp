#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n,int l, int r){


	while(l<=r){
		arr[l]=(arr[l]+arr[r])-(arr[r]=arr[l]);
		l++;
		r--;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	

}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int l;
	int r;
	cin>>l>>r;
	reverse(arr,n,l,r);
	
	return 0;
}