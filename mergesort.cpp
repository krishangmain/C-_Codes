#include<iostream>
using namespace std;

void merge(int *a,int start,int end,int mid){
    int n1=mid-start+1;
    int n2=end-mid;
    int b[n1];
    int c[n2];
    int i=0,j=0;
    for(int m=start;m<=mid;m++) 
    {
        b[i++]=a[m];
    }    //to store the values in the new arrays
    for(int n=mid+1;n<=end;n++) 
    {
        c[j++]=a[n];
    }
    int k=start;
    i=0;j=0;            //reinitialize to 0 for use in the next functions 
    while (i<n1 && j<n2)
    {
        if (b[i]<c[j]) 
        {
            a[k++]=b[i++];
        }
        else 
        {
            a[k++]=c[j++]; 
        }           //while both have elements left 
    }
    while (i<n1) 
    {
        a[k++]=b[i++];
    }
    while (j<n2) 
    {
        a[k++]=c[j++]; 
    }    //in case either of them is larger than the other 
}

void mergesort(int *a,int start,int end){
    // cout<<s<<" "<<e<<endl;
    if (start>=end) return;
    int mid=start+(end-start)/2;
    mergesort(a,start,mid);  //will recursively happen in a flowchart format 
    mergesort(a,mid+1,end);
    merge(a,start,end,mid);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}