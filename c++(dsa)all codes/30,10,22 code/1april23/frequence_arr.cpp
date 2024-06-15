#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int m=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		m=max(m,arr[i]);
		
	}
	m++;
	int f[m];
	for(int i=0;i<m;i++){
		f[i]=0;
	}
	for(int i=0;i<n;i++){
		f[arr[i]]++;
	}
	for(int i=0;i<m;i++){
	cout<<f[i];
}
	return 0;
}
//find duplicate in array with frequence array