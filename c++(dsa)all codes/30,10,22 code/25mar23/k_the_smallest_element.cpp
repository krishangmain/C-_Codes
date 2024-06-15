#include<iostream>
using namespace std;
int main(){
	int N;
	cout<<"Enter the size of the array"<<endl;
	cin>>N; //Size of array
	int arr[N];
	cout<<"Enter all the elements of the array"<<endl;
	for(int i=0;i<N;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<N-1;i++){
	    for(int j=0;j<N-i-1;j++){
	        if(arr[j]>arr[j+1]){
	            swap(arr[j],arr[j+1]);
	        }
	    }
	}
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    int k=0;
    cout<<"Enter k for kth smallest element : ";
    cin>>k;
    cout<<arr[k-1];
    return 0;

}
