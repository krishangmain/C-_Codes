#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	for (int i=1;i<=n;i++){
		for (int j=0;j<=n-i;j++){
			for (int k=j;k<j+i;k++){
				cout<<arr[k];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}