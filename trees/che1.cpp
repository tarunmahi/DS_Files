#include<iostream>
using namespace std;

struct node{
int data;
node*left;
node*right;
};
node*getnode(int val){
    node*temp= new node();
    temp->data=val;
    temp->left=temp->right=NULL;
    return temp;
}
node*insert(node*root,int x){
    if(root==NULL){
        root=getnode(x);
    }
    else if(x<=root->data){
        root->left=insert(root->left,x);
    }
    else if(x>=root->data){
        root->right=insert(root->right,x);
    }
    return root;
}
bool isbstutil(node*root,int min,int max){
    if(root==NULL)return true;
    if(root->data<min&&root->data>max&&
    isbstutil(root->left,min,root->data)
    &&isbstutil(root->right,root->data,max))return true;
    else return false;
}

bool isbst(node*root){
    return isbstutil(root,INT_MIN,INT_MAX);
}
int main(){
    node*root=NULL;
      root=insert(root,15);
     root=insert(root,134);
      root=insert(root,11);
       root=insert(root,5);
        root=insert(root,105);
         root=insert(root,76);
          root=insert(root,89);
           root=insert(root,10);
            root=insert(root,33);
             root=insert(root,123);
    if(isbst(root))cout<<"balanced";
    else cout<<"not balanced";
}