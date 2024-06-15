#include <iostream>
using namespace std;
void merge_2_sorted_arr(int a1[],int m,int a2[],int n){
	int i=0,j=0,k=0;
	int a3[1000];
	while(<m and j<n){
		if(a1[i]<a2[j]){
			a3[k++]=a1[i++];
		}else{
			a3[k++]=a2[j++];
		}
	}
	while(i<m){
		a3[k++]=a1[i++];
	}
	while(j<n){
		a3[k++]=a2[j++];
	}
	for (int i =0 ;i<m+n;i++){
		a1[i]=a3[i];
	}
}
int main(){
int a1[]={1,4,6,8};
int a2[]={2,3,5,7};
int a3[]={}
int n1=sizeof(arr)/sizeof(arr[0]);
int n2=sizeof(arr2)/sizeof(arr2[0]);

return 0;
}