// could have used functions to create this 
#include<iostream>
using namespace std;
int main(){
    int a[7]={3,5,7};
    int n=3;
    int b[]={1,2,4,6};
    int m=4;
    int i=n-1,j=m-1,k=m+n-1;
    while(i>=0 && j>=0){
        if(a[i]>b[j]){
            a[k]=a[i];
            k--;
            i--;
        }
        else{
            a[k]=b[j];
            k--;
            j--;
        }
    }
    while(j>=0){
        a[k]=b[j];     //Why didnt we do that for i as well as we are to add the elements in the array a whose index we have using i
        k--;           //they would already we sorted and belong to their correct positions no need for another function to add them to 
        j--;           // their correct places 
    }
    for(int i=0; i<n+m; i++){
        cout<<a[i]<<" ";
    }
}


// So in thsi we have taht we need to merge the two arrrays into one array fo rwhich not using rh smallest element we rather use the largest 
// element index as we have empty space in the back of the array and if we were to add them using the inital index or the smalles numbers 
// what would happen is that we would end up ruining the sorted array and once we do that we would rquire sorting again which is not ideal and 
// ruins the purpose of having already sorted arrays this is the main reason due to which we cant use the beginning index not cause we would
// have no space to store the initial element the only time this would work is when we are given a third array for adding the elements into 
// like similar to merge sort