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
bool present(node*root,int num){
    if(root==NULL)return false;
    else if(num==root->data)return true;
    else if(num<=root->data)return present(root->left,num);
    else if(num>=root->data)return present(root->right,num);
}
int maxval(node*root){
    if(root==NULL)return -1;
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}
int minval(node*root){
    if(root==NULL)return -1;
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
int heightval(node*root){
    if(root==NULL)return -1;
    return max(heightval(root->left),heightval(root->right))+1;

}
void levelorder(node*root){
    if(root==NULL)return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node*curr=q.front();
        cout<<" "<<curr->data;
        if(curr->left!=NULL)q.push(curr->left);
        if(curr->right!=NULL)q.push(curr->right);
        q.pop();
    }

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
    int max=maxval(root);
    int min =minval(root);
    int height=heightval(root);

    cout<<"max is "<<max<<"\n and min is" <<min<<"\n the height is "<<height ;
    levelorder(root);


}
