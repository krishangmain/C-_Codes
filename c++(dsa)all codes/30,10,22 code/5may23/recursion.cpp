#include<bits/stdc++.h>
using namespace std;
void sum(int a,int b){
	int c=a+b;
	cout<<c;
}
void sub(int a,int b){
	int c=a-b;
	cout<<c;
}
void mul(int a,int b){
	int c=a*b;
	cout<<c;
}
void divi(int a,int b){
	if (b==0){
		cout<<(a*1.0)/b<<endl;
	}
	else{
	cout<<"zindagi barbad maat kar";
	}
}
void helper(int a,int b){
	
	cin>>a>>b;
	sum(a,b);
	sub(a,b);
	mul(a,b);
	divi(a,b);
}
int main (){
	helper(5,7);
}