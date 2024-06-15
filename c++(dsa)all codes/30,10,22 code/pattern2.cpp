#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int j=1;
	int count=i;
for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		cout<<count<<" ";
	count=count++;
	
		}
	cout<<endl;
	}
}