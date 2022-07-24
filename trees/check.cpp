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
bool isless(node*root,int num){
    if(root==NULL)return true;
    if(root->data<num&&isless(root->left,num)&&isless(root->right,num))return true;
    else return false;
}
bool isgreat(node*root,int num){
    if(root==NULL)return true;
    if(root->data>num &&isgreat(root->left,num)&&isgreat(root->right,num))return true;
    else return false;
}
bool isbst(node*root){
    if(root==NULL)return true;
    if(isbst(root->left)&&isbst(root->right)&&isless(root->left,root->data)&&isgreat(root->right,root->data))return true;
    else return false;
}
int height(node*root){
    if(root==NULL)return -1;
    return max(height(root->left),height(root->right))+1;
}/*
int findheight(node*root){
if(root==NULL)return -1;
return max(findheight(root->left),findheight(root->right)) +1;
}*/
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

    int height1 =height(root);
    cout<<"\n";
    cout<<height1;
}