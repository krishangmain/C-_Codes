#include<iostream>
using namespace std;
int main(){	
	int n;
	cin>>n;
	int i=0;
	int j=0;
	
	for(i=0;i<n+2;i++){
	for(j=0;j<n;j++){
		if (i+j<=n-1)
		cout<<j+1<<" ";
	else if(i+j==n){
		cout<<"*"<<" ";

	}
	
	else{
		char c=j+'A';
		cout<<c<<" ";
	}
	
		}
	cout<<endl;
	}
	return 0;
}