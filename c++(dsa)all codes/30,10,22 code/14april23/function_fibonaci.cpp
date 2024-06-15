#include<bits/stdc++.h>
using namespace std;
void fibonaci (int n){
	int f[n+1];
	f[0]=0;
	f[1]=1;
	for (int i=2;i<=n;i++){
		f[i]=f[i-1]+f[i-2];
	}
	cout<<f[n];
}
	int main(){
		fibonaci(10);
	}