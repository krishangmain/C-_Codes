#include<iostream>
using namespace std;
int maxinarray(int a[],int n){
    int best=a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i]>best)
        {
            best=a[i];
        }
        
    }
    return best;
    
}
int main()
{   int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int result=0;
        int sum[n];
        for(int i = 0; i < n; i++)
        {sum[i]=0;
            for(int j = 0; j < n; j++)
            {
                sum[i]+=a[j];

            }
            sum[i]-=a[i];

        }
        result=maxinarray(sum,n);
        cout<<result;
    }
    return 0;
}
