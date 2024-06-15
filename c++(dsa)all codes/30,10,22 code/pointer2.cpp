#include <iostream>
using namespace std;
int main(){
	int n = 100;
	int* arr = new int [n];
	cout<<sizeof(arr)<<endl;
	for(int i=0;i<n;i++){
		*(arr+i)=i+1;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	delete []arr;
	for(int i=0;i<n;i++){
		*(arr+i)=i+1;
		cout<<arr[i]<<" ";
	}
	return 0;
}