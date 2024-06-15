#include<iostream>
using namespace std;
int main()
{   int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int best=a;
    if (b>best) 
    {
        best=b;
    }
    if (c>best) 
    {
        best=c;
    }
    if (d>best) 
    {
        best=d;
    }
    if (e>best) 
    {
        best=e;
    }
    cout<<best;

    return 0;
}

