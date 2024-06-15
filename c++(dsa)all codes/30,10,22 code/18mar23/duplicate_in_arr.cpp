#include<iostream>
using namespace std;
int main(){
	int n;
	int m;
	bool flag=false;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i]; 
	}
	int arr1[m];
	cin>>m;
	for(int j=0;j<m;j++){
		cin>>arr[j];
	}
	for(int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (arr[n]==arr1[m]){
				flag=true;
				break;
			}
		}
			if (flag==true)
			break;
		
	}

	if(flag==true) cout<<"found";
		else cout <<"not found";

	return 0;
}

//found if there is any same no in both of the array