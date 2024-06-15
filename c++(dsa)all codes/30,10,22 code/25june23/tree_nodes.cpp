#include <bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
vector<int>temp(1000,-1);
void preordertraversal(TreeNode*root){
    if (root==NULL){
        return;
    }
    cout<<root->data;
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(TreeNode*root){
    if (root==NULL){
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data;
}
void inordertraversal(TreeNode*root){
    if (root==NULL){
        return;
    }
    inordertraversal(root->left);
    cout<<root->data;
    inordertraversal(root->right);   
}
void levelordertraversal(TreeNode*root){
    queue<TreeNode*>q;
    q.push(root);
    while(q.size()){
        TreeNode*temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if (temp->left!=NULL){
            q.push(temp->left);
        }
        if (temp->right!=NULL){
            q.push(temp->right);
        }
    }
}
bool path_possible(TreeNode*root,int k){
    if(root==NULL)return false;
    if(root->left==NULL && root->right==NULL){
        if(k==root->data)return true;
        return false;
    }
    return path_possible(root->left,k-root->data)||path_possible(root->right,k-root->data);
}
int noofnodes(TreeNode*root){
    if(root==NULL)return 0;
    if(root->right==NULL&&root->left==NULL)return 1;
    return noofnodes(root->right)+noofnodes(root->left);
}
int leafnodecount(TreeNode* root){
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;
    return leafnodecount(root->left) + leafnodecount(root->right);
}
vector<int>positiveHIndex(100,-1),negativeHIndex(100,-1);
void TopView(TreeNode*root){
    queue<TreeNode*>q;
    queue<int>qi;
    q.push(root);
    qi.push(0);
    while(q.size()){
        TreeNode*curr=q.front();
        int currindex=qi.front();
        q.pop();
        qi.pop();
        if(currindex>=0){
            if(positiveHIndex[currindex]==-1)positiveHIndex[currindex]=curr->data;
        }
        else{
            if(negativeHIndex[abs(currindex)]==-1)negativeHIndex[abs(currindex)]=curr->data;
        }
        if(curr->left!=NULL){q.push(curr->left);qi.push(currindex-1);}
        if(curr->right!=NULL){q.push(curr->right);qi.push(currindex+1);}
    }
    for(int i=negativeHIndex.size()-1;i>=0;i--){
        if(negativeHIndex[i]!=-1)
            cout<<negativeHIndex[i]<<" ";
    }
    for(int x:positiveHIndex){
        if(x!=-1)
            cout<<x<<" ";
    }
}
void bottomView(TreeNode*root){
    queue<TreeNode*>q;
    queue<int>qi;
    q.push(root);
    qi.push(0);
    while(q.size()){
        TreeNode*curr=q.front();
        int currindex=qi.front();
        q.pop();
        qi.pop();
        if(currindex>=0){
         positiveHIndex[currindex]=curr->data;
        }
        else{
         negativeHIndex[abs(currindex)]=curr->data;
        }
        if(curr->left!=NULL){q.push(curr->left);qi.push(currindex-1);}
        if(curr->right!=NULL){q.push(curr->right);qi.push(currindex+1);}
    }
    for(int i=negativeHIndex.size()-1;i>=0;i--){
        if(negativeHIndex[i]!=-1)
            cout<<negativeHIndex[i]<<" ";
    }
    for(int x:positiveHIndex){
        if(x!=-1)
            cout<<x<<" ";
    }
}
void leftView(TreeNode*root, int VC){
    if(root==NULL)return;
    if(temp[VC]==-1){
        temp[VC]=root->data;
    }
    leftView(root->left, VC+1);
    leftView(root->right, VC+1);
}
void rightView(TreeNode*root, int VC){
    if(root==NULL)return;
    temp[VC]=root->data;
    rightView(root->left, VC+1);
    rightView(root->right, VC+1);
}
int main() {
    TreeNode*root=new TreeNode(1);
    TreeNode*node1=new TreeNode(2);
    TreeNode*node2=new TreeNode(3);
    TreeNode*node3=new TreeNode(4);
    TreeNode*node4=new TreeNode(5);
    TreeNode*node5=new TreeNode(6);
    TreeNode*node6=new TreeNode(7);
    root->left=node1;
    root->right=node2;
    node1->right=node3;
    node2->left=node4;
    node3->left=node5;
    node3->right=node6;
    leftView(root, 0);
    for(int x:temp){
        if(x!=-1){
            cout<<x<<" ";
        }
    }
    cout<<endl;
    cout<<leafnodecount(root);
    return 0;
}