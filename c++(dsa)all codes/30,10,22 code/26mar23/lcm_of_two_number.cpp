#include<iostream>
using namespace std;
int main(){
	long long a,b;
	cin>>a;
	cin>>b;
	long long big=max(a,b);
	long long store=big;
	long long small=min(a,b);
	while(true){
		if(big%small==0){
			cout<<big;
			break;

		}
		big=big+store;
	}
	
	return 0;
}