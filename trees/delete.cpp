#include<iostream>
#include<stack>
#include<queue>

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
        root=getnode(x);;
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
node*findmin(node*root){
    while(root->left!=NULL){
         root=root->left;
    } 
    return root;
}/*
node*delet(node*root,int val){
    if(root==NULL)return root;
    else if(val<root->data)root->left=delet(root->left,val);
    else if(val>root->data)root->right=delet(root->right,val);
    else{
        if(root->left==NULL&&root->right==NULL){
            delete(root);
            root=NULL;
        }
        else if(root->left==NULL){
            node*temp=root;
          root=root->right;
          free(temp);
        }
        else if(root->right==NULL){
            node*temp=root;
            root=root->left;
            free(temp);
        }
        else{
            node*temp=findmin(root->right);
            root->data=temp->data;
            root->right=delet(root->right,root->data);
            free(temp);
        }
    }
    return root;
}*/
node*delet(node*root,int val){
    
}
void inorder(node*root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<" "<<root->data;
    inorder(root->right);;
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
    root=delet(root,76);
    root=delet(root,123);
    root=delet(root,5);
    inorder(root);
}