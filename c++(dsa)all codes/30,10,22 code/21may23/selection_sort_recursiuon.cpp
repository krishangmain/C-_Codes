// #include<bits/stdc++.h>
// using namespace std;
// int steps=1;
// void selection_sort(int arr[],int n ,int s){
// 	//base case
// 	if (s==n-1){
// 		return;
// 	}
// 	//current work
// 	for(int i=s;i<n;i++){
		
// 	}
// 	//recursive call

// }
// int main(){
// 	int n=sizeof(arr)/sizeof(arr[0]);
// 	int arr[]=3,4,2,5,7,6,8,1,9;
// 	selection_sort()
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int helper(int arr[],int n,int s,int index){
    if(s==n){
        return index;
    }
    if(arr[index]>arr[s]){
        index=s;
    }
    return helper(arr,n,s+1,index);
}
void selectionsort(int arr[],int n,int s=0){
    if(s==n-1){
        return;
    }
    int index=s;
    int temp=helper(arr,n,s+1,index);
    swap(arr[s],arr[temp]);
    return selectionsort(arr,n,s+1);
}
int main(){
    int arr[]={1,5,4,3,2};
    int n=5;
    selectionsort(arr,n);
    for(auto x:arr){
        cout << x <<" ";
    }
    return 0;
}