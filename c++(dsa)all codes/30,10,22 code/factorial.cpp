#include <iostream>
using nam`espace std;
int fact (int n){//for big no mention long long before int 
	int f =1;//same as up
	for(int i=1;i<=n;i++){
		f=f*=i;
		return f;
	}
}
int main(){
int n;
cin>>n;
cout<<fact(n)<<endl;
return 0;
}