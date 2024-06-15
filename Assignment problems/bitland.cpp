#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i = 0; i < n; i++)
    {
        string statement;
        cin>>statement;
        if(statement=="X--"||statement=="--X")
        {
            count--;
        }
        else if(statement=="X++"||statement=="++X")
        {
            count++;
        }
        
        
    }
    cout<<count;
    
    
    return 0;
}
