#include<bits/stdc++.h>
using namespace std;
int partition_vector(vector<int>&v, int s, int e){
    int pivot=v[s];
    int count=0;
    for(int i=s;i<=e;i++){
        if(v[i]<pivot){
            count++;
        }
    }
    int pi=s+count;
    swap(v[s], v[pi]);
    int i=s, j=e;
    while(i<pi&&j>pi){
        while(v[i]<pivot)i++;
        while(v[j]>pivot)j--;
        if(i<pi&&j>pi){
            swap(v[i], v[j]);
        }
    }
    // 2 5 1 4 3 9 7 8
    return pi;
}
void quicksort(vector<int>&v, int s, int e){
    if(s>=e){
        return;
    }
    int pi=partition_vector(v, s, e);
    quicksort(v, s, pi-1);
    quicksort(v,pi+1, e);
}
int main(){
    vector<int>v={3,1,5,2,4,9,8};
    int n=v.size();
    quicksort(v, 0, n-1);
    for(int x:v){
        cout<<x<<" ";
    }
}
