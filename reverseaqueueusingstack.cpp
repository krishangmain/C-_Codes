#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    queue<int>q;
    for(int i = 0; i < n; i++)
    {   int a;
        cin>>a;
        q.push(a);
    }
    stack<int>S;
    while(!q.empty())
    {
        S.push(q.front());
        q.pop();

    }
    while(!S.empty())
    {
        int x=S.top();
        q.push(x);
        S.pop();
    }
    
    int si=q.size();
    while(si>0)
    {
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
        si--;
    }
    
    return 0;
}
