#include<iostream>
#include<algorithm>
using namespace std;
// int sumof(int a[],int start,int end){
//     int summer=0;
//     for(int i = start; i < end ; i++)
//     {
//         summer+=a[i];
//     }
//     return summer;
    
// }
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int maxsum=0;
    int i=0,j=0,sum1=0,sum2=0;
    while(i<n&&j<m )
    {   
        if(a[i]==b[j]) 
        {
            maxsum+=max(sum1,sum2) + a[i];
            i++;
            j++;
            sum1=0;
            sum2=0;
        }
        sum1+=a[i++];
        sum2+=b[j++];
        
        
    }
    maxsum+=max(sum1,sum2);
    cout<<maxsum;
    
    
    
    // int hello= 0;
    // hello =sumof(a,0,n);
    // cout<<hello;
    
    

    return 0;
}
