#include<iostream>
#include<queue>
using namespace std;
struct node{
    char data;
    node*left;
    node*right;
};

void preorder(node*root){

    if(root==NULL)return;
    cout<<" "<<root->data;
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<" "<<root->data;
    }
node*newnode(char c){
    node*temp=new node();
    temp->data=c;
    temp->left=temp->right=NULL;
    return temp;
}
node*insert(node*root,char c){
    node*temp=newnode(c);
    if(root==NULL)root=temp;
    else if(c<=root->data){
       root->left= insert(root->left,c);}
    else {
        root->right=insert(root->right,c);
    }
    return root;
}
void levelorder(node*root){
   queue<node *> q;
   q.push(root);
   while(!q.empty()){
    node*temp=q.front();
    cout<<" "<<temp->data;
    if(temp->left!=NULL)q.push(temp->left);
    if(temp->right!=NULL)q.push(temp->right);
    q.pop();
   }
}
void inorder(node*root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<" "<<root->data;
    inorder(root->right);
}

int main(){
    node*root=NULL;
    root=insert(root,'M');
     root=insert(root,'B');
      root=insert(root,'Q');
       root=insert(root,'A');
        root=insert(root,'C');
         root=insert(root,'Z');
    
    
    inorder(root);cout<<'\n';
    preorder(root);cout<<'\n';
    postorder(root);cout<<"\n";
    levelorder(root);
    

}