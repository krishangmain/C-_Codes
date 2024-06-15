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
{   LL_Node *Head=new LL_Node();   //we need to create pointers for all the nodes rather than the objects themselvles
    LL_Node *L1=new LL_Node();
    LL_Node *L2=new LL_Node();
    LL_Node *L3=new LL_Node();
    LL_Node *L4=new LL_Node();
    LL_Node *L5=new LL_Node();

    Head->next=L1;
    L1->next=L2;
    L2->next=L3;
    L3->next=L4;  //now what this does is that is assigns the value of the next pointer to the next pointer variable of the previous object 
    L4->next=L5;


    // *Head=12;

    







//     Head.data=12;
//     Head.next->L1.data;

    
    return 0;
}
