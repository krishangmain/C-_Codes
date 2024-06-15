#include <iostream>
using namespace std;
int num_of_steps(int i,int n){
	//base case
	if(i==n)return 1;
	if(i>n)return 0;
	//recusive case
	return num_of_steps(i+1,n)+num_of_steps(i+2,n);
}
int main(){
	int n=4;//no of stairs
	cout<<num_of_steps(0,n)<<endl;
}