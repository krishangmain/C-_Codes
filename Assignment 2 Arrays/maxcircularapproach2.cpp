#include<iostream>
using namespace std;
int leastinarray(int a[],int n){
    int least=a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i]<least)
        {
            least=a[i];
        }
        
    }
    return least;
    
}
int sumofarray(int a[],int n){
    int summer=0;
    for(int i = 0; i < n; i++)
    {
         summer+=a[i];
    }
    return summer;
    
}
int main()
{int t;
cin>>t;
while(t--){
    int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int result;
        result=sumofarray(a,n)-leastinarray(a,n);
        cout<<result;
}
    return 0;
}
