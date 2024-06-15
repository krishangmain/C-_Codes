#include<bits/stdc++.h>
using namespace std;
int count (int n){
	//base case
	if(n<10){
		return 1;
	}
	//recursive call
	int c=count(n/10);
	//current work
	return c+1;
}
int main(){
	cout<<count(02);
	return 0;	
}