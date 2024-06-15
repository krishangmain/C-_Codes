#include<iostream>
using namespace std;
int main(){
    // optimizing bubble sort  
    int a[]={1,2,3,4,5};
    int n=5;
    int c=0;
    for(int i=0;i<n-1;i++){
        for (int j=0;j<n-2-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                c++;
            }
        }
        if(c==0){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

}
}
                // take a counter variable and then increase the counter whenever we have a swapping conducted if no swapping is conducted font increase the counter and take another if statement sich that if we have counter is 0 
                // we will break out of the loops makes ure teh break statement lies in the i loop rahter than the j loop 