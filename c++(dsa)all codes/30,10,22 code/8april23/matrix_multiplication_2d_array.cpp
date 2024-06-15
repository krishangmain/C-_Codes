#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int m;
	cin>>n;
	cin>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			 cin>>arr[i][j];
		}
	}
	int a;
	cin>>a;
	int arr2[m][a];
	for(int i=0;i<m;i++){
		for (int j=0;j<a;j++){
			 cin>>arr2[i][j];
		}
	}
	int arr3[n][a];
	for(int i=0;i<n;i++){
		for (int j=0;j<a;j++){
			arr3[i][j]=0;
			for(int k=0;k<m;k++){
				arr3[i][j]+=arr[i][k]*arr2[k][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for (int j=0;j<a;j++){
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;
}