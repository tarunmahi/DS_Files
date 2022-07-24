#include<iostream>
#include<queue>

using namespace std;
struct node{
 int data;
 node*left;
 node*right;
};
node*newnode(int x){
    node*temp=new node();
    temp->data=x;
    temp->left=temp->right=NULL;
    return temp;
}
node*insert(node*root,int val){
    node*temp=newnode(val);
    if(root==NULL){
        root=temp;
    }
    else if(val<=root->data){
        root->left=insert(root->left,val);
    }
    else if(val>=root->data){
        root->right=insert(root->right,val);
    }
    return root;
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
    if(isbst(root))cout<<"tree is a bst";
    else cout<<"not balanced";
}