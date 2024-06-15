#include<iostream>
using namespace std;
int main(){
	int n;
	int x;
	bool flag=false;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>x;
	for(int i=0;i<n;i++){
		if (arr[i]==x)
		//cout<<"match found ";
		flag=true;
		break;
	}
		if(flag=true) cout<<"found";
		else cout <<"not found";

	return 0;
}

//found if the user given output is already in the array