#include<iostream>
using namespace std;
int main(){
	int n;
	bool flag=false;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (arr[i]>arr[j]){
				arr[i]=(arr[i]+arr[j])-(arr[j]=arr[i]);
			}
		}
	}
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}