#include<bits/stdc++.h>
using namespace std;
int knapsack(int n,int val[],int weight[],int capacity){   //here we have the knapsack function 
        if(capacity==0||n==0)
        { //this will be our base case in the case where the capacity or the number of elements becomes 0
            return 0;
        }
        int option2=0;
        int option1=knapsack(n-1,val,weight,capacity); //here we have two options one of which explores the case where
        if(capacity>weight[n-1])        //we have either the last object being included or not 
        {
            option2=knapsack(n-1,val,weight,capacity-weight[n-1]);
        }
        return max(option1,option2);  //thsi identidies whether that the knapsack holds the last element or not depending upon which gives maximum value
        
        
    }
int main()

{   int n;
    cin>>n;

    int weight[n];
    for(int i = 0; i < n; i++)
    {
        cin>>weight[i];
    }
    int value[n];
    for(int i = 0; i < n; i++)
    {
        cin>>value[i];
    }
    int capacity;
    cin>>capacity;
    int answer;
    answer=knapsack(n,value,weight,capacity);
    cout<<answer;
     
    
    
    return 0;
}
