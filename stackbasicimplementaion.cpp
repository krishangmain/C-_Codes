#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    stack<int>S;
    for(int i = 0; i < n; i++)
    {
        S.push(i);
    }
    stack<int>S1;
    while(S.size())
    {
        S1.push(S.top());
        S.pop();
    }
    while(S1.size())
    {
        cout<<S1.top();
        S1.pop();  
    }
    
    
    return 0;
}
