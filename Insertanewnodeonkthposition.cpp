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
{   int n;
    cin>>n;
    int x;
    cin>>x;
    LL_Node *head=new LL_Node();
    // *head.data=x;   now this can also be written as the following line
    head->data=x;
    LL_Node *tail=new LL_Node();
    tail=head;
    for(int i = 0; i < n; i++)
    {
        LL_Node *temp=new LL_Node();
        cin>>temp->data;
        tail->next=temp;
        tail=tail->next;
        cout<<temp->data;  //can also be written as tail= temp 
// the meaning of this is that tail should always be the last element only differnce is that 
// the other one is a little easier to understand 
    }
    
    
    

    
    return 0;
}
