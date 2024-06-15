#include<iostream>
using namespace std;
int main(){
int n;
int i;
int arr[n];
cin>>n;
for (i=0;i<n;i++){
cin>>arr[i];
}
int sum=0;
for(int i=0;i<n;i++){
	sum=sum+arr[i];
}

cout<<sum;

}

//sum of elements in array 