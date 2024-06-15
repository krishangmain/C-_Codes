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
bool loop_or_not(LL_Node *Head){
    LL_Node *f;
    LL_Node *s;
    f=Head;
    s=Head;
    while(f!=NULL&&f->next!=NULL)       
    {
        f=f->next->next;
        s=s->next;
        if(f==s)
        {
            return true;
        }
        
    }
    return false;
    
}
int main()
{
    LL_Node *Head=new LL_Node();   
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

    bool what;
    what=loop_or_not(Head);
    cout<<what;
    
    return 0;
}
