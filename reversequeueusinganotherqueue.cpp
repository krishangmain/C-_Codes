#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    queue<int>q1;
    queue<int>q2;
    for(int i = 0; i < n; i++)
    {   int a;
        cin>>a;
        q1.push(a);
    }
    int si=q1.size();
    while(si>0)
    {
        for(int i = 0; i < si-1; i++)
        {
            int fi=q1.front();
            q1.pop();
            q1.push(fi);
        }
        q2.push(q1.front());
        si--;
        q1.pop();
        
    }
    

    // while(!q1.empty())
    // {
    //     q2.push(q1.front());
    //     q1.pop();
    // }
    
    int x=q2.size();
    while(x>0)
    {   int y=q2.front();
        cout<<y<<" ";
        q2.pop();
        q2.push(y);
        x--;
    }

    
    
    return 0;
}
