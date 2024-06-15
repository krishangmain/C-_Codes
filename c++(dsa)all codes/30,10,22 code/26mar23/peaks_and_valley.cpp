#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];//4 1 5 2 0 6 12
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int a,b,c;
	int v_count=0;
	int p_count=0;
	a=arr[0];
	b=arr[1];
	c=arr[2];
	for(int i=0;i<n;i++){
		if ((arr[i-1]<arr[i]) && (arr[i]>arr[i+1])){
            v_count++;
        }
        else if((arr[i-1]>arr[i]) && (arr[i]<arr[i+1])){
            p_count++;
        }

	}
	cout<<v_count<<endl;
	cout<<p_count;
	return 0;
}