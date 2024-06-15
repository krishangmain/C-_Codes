#include <iostream>
using namespace std;
int main(){
	char test;
	cout<<"enter a value:";
	cin>>test;
	if(test>='a' && test<='z') {
	cout<<"lower case";
	}
	else if(test>='A' && test<='Z') {
		cout<<"upper case";
	}
	else if(test>=0 && test<=9) {
		cout<<"numerical";
	}
	return 0;
}