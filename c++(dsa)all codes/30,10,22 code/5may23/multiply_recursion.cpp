#include<bits/stdc++.h>
using namespace std;
int multiply (int a,int b){
	//base case
	if(b==0){
		return 0;
	}
	//recursive call
	return a+multiply(a,b-1);
	//current work
	
}
int main(){
	cout<<multiply(5,4);
	return 0;	
}