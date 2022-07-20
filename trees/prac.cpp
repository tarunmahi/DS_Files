#include<iostream>
using namespace std;
struct bstnode{
    int data;
    bstnode*left;
    bstnode*right;
};
bstnode*getnewnode(int x){
    bstnode*temp=(struct bstnode*)malloc(sizeof(struct bstnode*));
    temp->data=x;
    temp->left=temp->right=NULL;
    return temp; 

}
bstnode*insert(bstnode*root,int x){
      bstnode*temp =getnewnode(x);
      if(root==NULL){
        root=temp;
      }
      else if(temp->data<=root->data){
        root->left=insert(root->left,x);
      }
      else{
        root->right=insert(root->right,x);
      }
      return root;
}
bool change(bstnode*root,int num){
    if(root==NULL)return false;
    else if(root->data==num)return true;
    else if(num<=root->data)return(change(root->left,num));
    else return change(root->right,num);
}
int main(){
struct bstnode *root=NULL;
root=insert(root,25);
root=insert(root,255);
root=insert(root,251);
root=insert(root,12);
root=insert(root,5);
root=insert(root,2);
cout<<"enter a number to search ";
int num;
cin>>num;
if(change(root,num))cout<<"number is found ";
else cout<<"number is not found";
}