#include<bits/stdc++.h>
using namespace std;
class LL_Node{
    public:
    int data;
    LL_Node *next;
    LL_Node *random;
    LL_Node(){
        data=0;
        next=NULL;
        random=NULL;
}
};
LL_Node*copy_of_LLnode(LL_Node*head){
    LL_Node *temp=head;
    while(temp!=NULL)   //imagine your LL here and think to add nodes in between them 
    {
        LL_Node *temp_of_new_list=new LL_Node();
        temp_of_new_list->data=temp->data;  //for copying the data into the new elements
        temp_of_new_list->next=temp->next;  //for copying the next address values into the new nodes 
        temp->next=temp_of_new_list;   //now we sever the connection that the orignal node had with its next and make a connection with the new node we have such that the new node is connected in between the two orignal nodes 
        temp=temp->next->next;  // this is just to iterate so the while loop moves forward we do it by two so that we land on the orignal nodes rather than the newly created ones
    }
    temp=head->next;
    while(temp!=NULL)
    {
        temp->next->random=temp->random->next;  //explanation in the notebook to assign randoms into the list 
        temp=temp->next->next;  // iterating again so move ahead by 2 so that we land on the orignal nodes rather than the new nodes
    }
    LL_Node*head2=head->next;  //so that we have a way into the new list
    temp=head;
    LL_Node *temp2=head2;    //to peacefully move forward without destroying the head variable
    while(temp!=NULL)
    {
        temp->next=temp->next->next;  //to make the orignal connections 
        if(temp2->next!=NULL)  // for edge cases incase the temp2 element is the last element 
        {
            temp2->next=temp2->next->next;  //to make the connections in the new linkedlist 
        }
        
        // temp2->next=temp2->next->next;
        temp=temp1->next;
        temp2=temp2->next;
    }
    
    
    
    
}
int main()
{
    
    return 0;
}
