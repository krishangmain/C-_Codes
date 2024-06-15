// // sorting means to get a array into not ascending order but called 
// non increasing as it would mean that the first element and the second 
// elemnt would either mean that second element would be larger than the 
// first or equal than the first this is a case in which people mess up 
// when we have quetions
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element";
        cin>>arr[i];}
                                //n-1 here cause if n-1 elements are
     for(int i=0;i<n-1;i++){                    // the last element would automatically be
        for(int j=0; j<n-i-1;j++){             // sorted 
            if(arr[j]>arr[j+1]){
            arr[j]= ((arr[j]+arr[j+1])-(arr[j+1]=arr[j]));} 
        }
     }  
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//In bubble sort we compare every element with its immediate neighbour rather than the 
//whole array as we only take n-1 iterations for every procedding i we move through 




