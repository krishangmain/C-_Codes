#include<bits/stdc++.h>
using namespace std;
int binary(int arr[], int s, int e, int x){
  //base case 
	while (s <= e) {
        int m = s + (e - s) / 2;
 
        //current work
        if (arr[m] == x)
            return m;
 
        //recursive call
        if (arr[m] < x)
            s = m + 1;
 
        
        else
            e = m - 1;
    }
 
    return -1;
}
int main(){
	int arr[]={1,2,3,4,5,6,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=6;
	cout<<binary(arr, 0, n - 1, x);
	return 0;
}