#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
	//base case
	if (n==0){
		return 1;
	}
	//recursive call
	int x=factorial(n-1);
	//current work
	return n*x;
}
int main(){
	cout<<factorial(5);
	return 0;
}