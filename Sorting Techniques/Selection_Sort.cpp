//Selection Sort 

#include<iostream>
using namespace std;
int main(){
    int n,ans_index;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element";
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
    ans_index=j;
    for(int i=j+1;i<n+1;i++){
        if(arr[i]<=arr[ans_index]){;
            arr[ans_index]=arr[ans_index]+arr[i] -(arr[i]=arr[ans_index]);
        }}}
    cout<<arr[ans_index]<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";}
    
    
}
//in selection sort we have an array in which we isolate the smallest or the largest 
// element usually the smallest but we do so by using its index value rather than 
// its value itself now moving forward we swap that element with the first element
//  on the array ie the one at the 0 postion once we do that we repeat the 
//  iteration but now from the second element of the array ie on the 1 index 
//  for which we require two loops one which can initilize the index to be 0 or
// one and also to know where to start the iteration from in the mext one after
// which second loop is to find the minimum value form the remainder of the 
// array and then it is sorted