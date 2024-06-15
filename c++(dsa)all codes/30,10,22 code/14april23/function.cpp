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
void did(int a,int b){
	if (b==0)
	{
		cout<<(a*1.0)/b;
	}
	else{
	cout<<"zindagi barbad maat kar";
}
}
int main (){
	sum(2,4);
	cout<<endl;
	sub(2,4);
	cout<<endl;
	mul(2,4);
	cout<<endl;
	did(10,3);
	cout<<endl;
	return 0;
}