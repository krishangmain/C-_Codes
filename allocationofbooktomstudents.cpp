#include<bits/stdc++.h>
using namespace std;
int Total_sum(vector<int>V,int n){
    for(int i = 0; i < n; i++)
    {
        int complete__sum=0;
        complete__sum+=V[i];
        return complete__sum;    
    }

    
}
bool ispossible(int mid,vector<int>V,int n,int m ){
    int sum=0,s_count=1;
    for(int i = 0; i < n; i++)
    {
        for(int i = 0; i < n; i++)
        {
            if(mid>= sum + V[i])
            {
                sum+= V[i];
            }
            else 
            {
                s_count++;
                sum=V[i];
                if(s_count >m || V[i]>mid)
                {
                    return false;
                }

                
            }
        if(s_count > m || V[i]> mid)
            {
                return false;
            }
        }
    return true;
    }
    
    // int sumofarray=0;
    // int i=0;
    // while(sumofarray<range)
    // {
    //     // int i=0;
    //     sumofarray+=V[i];
    //     i++;    
    // }
    // int remaining_sum=0;
    // while(i<n)
    // {
    //     remaining_sum=arr[i];
    // }
    // cout<<sumofarray;
    // cout<<remaining_sum;
    


    

    // for(int i = 0; i < n; i++)
    // {
    //     sumofarray+=arr[i];
    // }
    
    
}
int main()
{
    int n;
    cin>>n;
    vector<int>V;
    // V.resize(n);
    for(int i = 0; i < n; i++)
    {
       int a;
       cin>>a;
       V.push_back(a);
    }
    int m;
    cin>>m;
    int s =1;
    int e=Total_sum(V,n);
    int ans=e;
    while(s<=e) 
    {   int mid=s + (e-s)/2;
        if(ispossible(mid,V,n,m))
        {
            ans=mid;
            e=mid-1;

        }
        else 
        {
            s=mid+1;
        }
        
    }
    cout<<ans;
    
    
    
    return 0;
}
