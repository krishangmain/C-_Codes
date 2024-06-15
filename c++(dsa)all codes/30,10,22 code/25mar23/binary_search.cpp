#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int end=n-1;
	int start=0;
	int mid;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	while(start<=end){
		mid =(start+end)/2;
		if(arr[mid]==target){
			cout<<"Element found at index: "<<mid;
			break;
		}
		else if(arr[mid]>target){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}

	return 0;
}
//always use a sorted array