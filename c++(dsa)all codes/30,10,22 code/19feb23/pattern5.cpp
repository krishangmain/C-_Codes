#include<iostream>
using namespace std;
int main()
{	int n;
	cin>>n;
	int i=0;
	int j=0;
	
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if (i<=j){
		cout<<j+1<<" ";
	}
	else{
		cout<<"  ";//can give single space to make it eq tringle
	}
	
		}
	cout<<endl;
	}
	return 0;
}