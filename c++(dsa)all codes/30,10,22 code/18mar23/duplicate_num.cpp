#include<iostream>
using namespace std;
int main(){
	int n;
	bool flag=false;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (arr[i]==arr[j]){
				flag=true;
				break;
			}
			//cout<<"match found";
		}
		if (flag==true)
			break;
		
	}

	if(flag==true) cout<<"found";
		else cout <<"not found";

	return 0;
}

//found if there is any duplicate no in the array