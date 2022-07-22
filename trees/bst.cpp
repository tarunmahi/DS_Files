#include<iostream>
#include<queue>

using namespace std;
struct node{
  int data;
  node*left;
  node*right;
};
node*newnode(int x){
 node*temp = new node();
 temp->data=x;
 temp->left=temp->right=NULL;
 return temp;
}
node*insert(node*root,int val){
  node*temp=newnode(val);
  if(root==NULL)root=temp;
  else if(val<=root->data){
    root->left=insert(root->left,val);
  }
  else if(val>=root->data){
    root->right=insert(root->right,val);
  }
  return root;
}
bool ispresent(node*root,int num){
 if(root==NULL)return false;
 else if(num==root->data)return true;
 else if(num<=root->data){
  return ispresent(root->left,num);
 }
 else return ispresent(root->right,num);
}
int max(node*root){
  if(root==NULL)return -1;
  while(root->right!=NULL){
        root=root->right;
  }
  return root->data;
}
int min(node*root){
  if(root==NULL)return -1;
  while(root->left!=NULL){
    root=root->left;
  }
  return root->data;
}
int findheight(node*root){
if(root==NULL)return -1;
return max(findheight(root->left),findheight(root->right)) +1;
}
int main(){
  node*root=NULL;
  root=insert(root,10);
   root=insert(root,100);
    root=insert(root,1000);
     root=insert(root,1023);
      root=insert(root,101);
       root=insert(root,1011);
        root=insert(root,1034);
         root=insert(root,1056);
          root=insert(root,1);
  int num;
  cout<<"enter number to search\n";
  cin>>num;
  if(ispresent(root,num))cout<<"number found";
  else cout<<"number not found";
  int minval=min(root);
  int maxval =max(root);
  int height =findheight(root);
  cout <<"min value is "<<minval<<"\n Max value is "<<maxval<<"\n"<<"the height is "<<height;


}