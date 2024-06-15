#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element";  //this is a code for the swapping of two elements
        cin>>arr[i];                //of an array between themselves
    }                               //now this means swapping the first with the second 
                                    //and third with the fourth and so on
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n-1){          // the reason we have n-1 here for both even and odd cases
        int temp=0;        // is such that for even cases it will reach the second last element
        temp=arr[i];       // such that it will swap itself with the last element so the work will be done
        arr[i]=arr[i+1];   // in odd cases it will let the last element be as it will not be 
        arr[i+1]=temp;     // swapped with anyone
        i+=2;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    
}