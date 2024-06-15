#include<iostream>
#include<algorithm>
using namespace std;
int current(int *a,int start,int end){
    int pivot=start;
    
    for(int i = start+1; i <=end; i++)
    {
        if(a[i]<a[start]){pivot++;}
    }
    swap(a[start],a[pivot]);
    int i=start;
    int j=pivot+1;
    while(i<pivot&&j<end)
    {
        while(a[i]<a[pivot])
        {
            i++;
        }
        while(a[j]>=a[pivot])
        {
            j++;
        }
        if(i<pivot&&j<end)
        {
            swap(a[i],a[j]);
        }
        
        
    }
    return pivot;
    
    
}
void quicksort(int *a,int start,int end){
    int piv=0;
    if(start>end){
        return ;
    }
    piv=current(a,start,end);
    quicksort(a,start,piv-1);
    quicksort(a,piv+1,end);

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // int x=current(a,0,n);
    quicksort(a,0,n);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    // int a[5]={4,1,7,5,3};
    // int count=0;
    // int pivot=a[0];
    // for(int i = 0; i < 5; i++)
    // {
    //     if(a[i]<pivot)
    //     {
    //         count++;
    //     }
        
    // }
    // swap(a[0],a[count]);
    
    // int i=0,j=0;
    // while(i<count&&j<5)
    // {
    //     while(a[i]<a[count])
    //     {
    //         i++;
    //     }
    //     while(a[j]>=a[count])
    //     {
    //         j++;
    //     }
    //     swap(a[i],a[j]);
        
    // }
    // for(int i = 0; i < 5; i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    
    

    

    return 0;
}
