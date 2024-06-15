#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	//base case
	if (n<=1){
		return n;
	}
	//recursive call
	int x1=fib(n-1),x2=fib(n-2);
	//current work
	return x1+x2;
}
// int fib(int n){
// 	if (n<2)return n;
// 	return fib(n-1)+fib(n-2);
// }
int main(){
	cout<<fib(10);
	return 0;	
}