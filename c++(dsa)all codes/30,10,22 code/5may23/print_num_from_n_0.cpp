#include<bits/stdc++.h>
using namespace std;
void print(int n){
	//base case
	if (n==0){
		return;
	}
	//recursive call
	cout<<n<<" ";
	//current work
	print(n-1);
}
int main(){
	print(10);
	return 0;	
}