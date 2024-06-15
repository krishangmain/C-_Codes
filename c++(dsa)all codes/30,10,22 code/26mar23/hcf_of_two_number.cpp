#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	cin>>a;
	cin>>b;
	int arr[100000];
	int ind =0;
	int ans=1;
	for(int i=1;i*i<=a;i++){
		if(a%i==0){
			arr[ind]=i;
			ind++;
			arr[ind]=a/i;
			ind++;
		}
	}
	for (int i=0;i<ind;i++){
		if (b%arr[i]==0){
			ans=max(arr[i],ind);
			// if (ans<arr[i]);
			// ans=arr[i];
			
		}
	}
	cout<<ans;
	return 0;
}