#include<bits/stdc++.h>
using namespace std;
int fact(int){
	int fact=1;
	for(int i=1;i<=n;i++){
		fac*=1;
	}
	return fac;
}
int main(){
	int n;
	cin>>n;
	cout<<fact(n);
}