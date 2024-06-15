#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int arr[n];     
 bool milgaya=false;
 int count = 0;
	for (int i=0;i<n;i++){
		cin>>arr[i];        // 1 2 2 3 4 5
	}
    for (int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                milgaya=true;
                count=count+1;

            }

        }
    }
   			 if (milgaya==true){
         	cout<<"Duplicate Found";
         	cout<<"No. of Duplicates: "<< count;
   		 	}
     	else
         cout<<"Not Duplicate";

}