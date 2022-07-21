#include<iostream>
using namespace std;
struct node{
  int data;
  node*left;
  node*right;
};
node*newnode(int x){
  struct node*temp=new node();
  temp->data=x;
  temp->left=temp->right=NULL;
  return temp;
}
node*insert(node*root,int y){
  node*temp=newnode(y);
  if(root==NULL){
    root=temp;
  }
  else if(temp->data<=root->data){
    root->left=insert(root->left,y);
  }
   else if(temp->data>=root->data){
        root->right=insert(root->right,y);
    }
  return root;
}
bool change(node*root,int num){
  if(root==NULL)return false;
  else if(root->data==num)return true;
  else if(num<=root->data)
    return change(root->left,num);
  
  else return change(root->right,num);
}
int max(node*root){
  if(root==NULL)return -1;
  while(root->right!=NULL){
    root=root->right;
  }
  return root->data;

}
int main(){
  node*root=NULL;
  root=insert(root,12);
  root=insert(root,2);
  root=insert(root,1);
  root=insert(root,19);
  root=insert(root,120);
  root=insert(root,15);
  int num;
  cout<<"enter the nnumber ";
  cin>>num;
  if(change(root,num))cout<<"number found";
  else cout<<"mnumber not found";
  int maxval =max(root);
  cout<<maxval;
  }