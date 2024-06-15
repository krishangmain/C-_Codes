#include<bits/stdc++.h>
using namespace std;
void print(int n){
	//base case
	if (n==0){
		return;
	}
	//recursive call
	print(n-1);
	//current work
	cout<<n<<" ";
}
int main(){
	print(10);
	return 0;	
}