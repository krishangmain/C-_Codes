#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
#include<string>
using namespace std;
int main()
{       string a[]={"a","b","c"};
        string b[]={"d","e","f"};
        // string c[];
        
        cout<<"[";
        for(int i=0;i<3;i++){
            for(int j = 0; j < 3; j++)
            {
                cout<<"\""<<a[i]+b[j]<<"\""<<",";
                
                
            }
            
        }
        cout<<"]";
        
// {   vector<int>v;
//     for(int i = 0; i < 10; i++)
//     {   
//         v.push_back(i);
//     }
//     // for(int x:v){
//     //     cout<<x;
//     // }
//     for(int i = 0; i < 10; i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     string s="Hello";
//     cout<<s<<endl;

//     string n=s;
//     cout<<n;
    

    
    return 0;
}
