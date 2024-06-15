#include<iostream>
using namespace std;
/*syntax
return type,identifier(parameter){
	task;
	return value;
}*/
void hello(int n){ //parameter
	while (n--)
	cout<<"hello\t";
}
int add(int a,int b){
	int c =a+b;
	//cout<<c<<endl;
	return c;
}

int main(){
	//invoking or calling
	//syntax
	//identifier(argument);
	hello(10);
	cout<<endl;
    cout<<add(10,20)<<endl;
	return 0;


}