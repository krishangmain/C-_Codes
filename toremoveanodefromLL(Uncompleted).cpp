#include<bits/stdc++.h>
using namespace std;
class LL_Node{
    public:
    int data;
    LL_Node *next;
    LL_Node(){
        data=0;
        next=NULL;

    }


};
int main()
{   LL_Node *Head=new LL_Node();   
    LL_Node *L1=new LL_Node();
    LL_Node *L2=new LL_Node();
    LL_Node *L3=new LL_Node();
    LL_Node *L4=new LL_Node();
    LL_Node *L5=new LL_Node();

    Head->next=L1;
    L1->next=L2;
    L2->next=L3;
    L3->next=L4;  
    L4->next=L5;
    
    cout<<"which node to remove:";
    int k;
    cin>>k;
   while(k--)
   {
        int i =0;
        while(i<k-1)
        {
            
        }
        
   }
   
   
    
    return 0;
}
