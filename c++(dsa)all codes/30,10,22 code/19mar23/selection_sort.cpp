#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		int min= arr[i];
		int store = i;
		for (int j=i;j<n;j++){
			if (arr[j]<min){
				min=arr[j];
				store=j;
			}	
		}
		int temp = arr[i];
		arr[i] = arr[store];
		arr[store] = temp;
	}
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}