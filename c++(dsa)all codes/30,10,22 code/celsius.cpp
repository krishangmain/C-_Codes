#include <iostream>
using namespace std;
void celsius(int i,int f,int s){
	for(;i<=f;i+=s){
		int c= 5.0*(i-32)/9;
		cout<<i<<" "<<c<<endl;
		}
	}
int main(){
	int i= 0,f=300,s=20;
	celsius(i,f,s);
	return 0;
	
}