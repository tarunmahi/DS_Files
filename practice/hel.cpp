#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
};
node*newnode(int val){
    node*temp=new node();
    temp->data=val;
    temp->left=temp->right=NULL;
    return temp;
}
node*insert(node*root,int val){
    node*temp=newnode(val);
    if(root==NULL)root=temp;
    else if(temp->data<=root->data){
        root->left=insert(root->left,val);
    }
    else if(temp->data>=root->data){
        root->right=insert(root->right,val);
    }
    return root;
}
int main(){
    node*root=NULL;
    root=insert(root,15);
    root=insert(root,21);
     root=insert(root,14);
      root=insert(root,10);
       root=insert(root,5);
        root=insert(root,21);
         root=insert(root,90);
          root=insert(root,1);
}
