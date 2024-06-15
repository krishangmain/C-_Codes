#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node*next;
    node(int d){
        data = d;
        next = NULL;
    }
};

void insertionfront(node*&head, node*&tail, int data){
    if (head==NULL){
        node*n=new node(data);
        head = tail = n;
    }
    else {
        node*n = new node(data);
        n->next=head;
        head = n;
    }
}

void insertionend(node*&head, node*&tail, int data){
    
    if (head == NULL){
        node*n = new node(data);
        head = tail = n;
    }
    else{
        node*n = new node(data);
        tail->next = n;
        tail = n;
        tail->next = NULL;
    }
}

void insertionmiddle(node*&head, node*&tail, int pos, int data){
    node*n = new node(data);
    node*temp = head;
    for (int i=1; i<=pos-1; i++){
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}

void deletionfront(node*&head, node*&tail){
    if (head==NULL){
        return;
    }
    else if (head->next == NULL){
        delete head;
        head = tail = NULL;
    }
    else {
        node*temp = head;
        temp = temp->next;
        head = temp;
    }
}

void deletionend(node*&head, node*&tail){
    if (head==NULL){
        return;
    }
    else if (head->next == NULL){
        delete head;
        head = tail = NULL;
    }
    else {
        node*temp = head;
        while (temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
}

void deletionmiddle(node*&head, node*&tail, int pos){
    if (head==NULL){
        return;
    }
    else {
        node*temp = head;
        for (int i=0; i<pos-1; i++){
            temp = temp->next;
        }
        node*n = temp->next;
        temp->next = n->next;
    }
}

node* searchiterative(node*head, int key){
    if (head==NULL){
        return NULL;
    }
    node*temp = head;
    while (temp != NULL){
        if (temp->data == key){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

node* searchrecursive(node*head, int key){
    if (head==NULL){
        return NULL;
    }
    if (head->data == key){
        return head;
    }
    return searchrecursive(head->next, key);
}

node*middlell(node*head){
    if (head==NULL){
        return NULL;
    }
    node*fast = head->next;
    node*slow = head;
    while (fast!=NULL and fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

void printll(node*head){
    node*temp=head;
    while (temp != NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"END";
}

int main() {
    node*head, *tail;
    head = tail = NULL;
    insertionend(head, tail, 1);
    insertionend(head, tail, 2);
    insertionend(head, tail, 3);
    insertionend(head, tail, 4);
    printll(head);
    cout<<endl;
    insertionmiddle(head, tail, 2, 5);  
    printll(head);
    cout<<endl;
    deletionfront(head, tail);
    printll(head);
    cout<<endl;
    deletionend(head, tail);
    printll(head);
    cout<<endl;
    deletionmiddle(head, tail,2);
    printll(head);
    cout<<endl;
}