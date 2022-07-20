#include<iostream>
using namespace std;
struct bstnode{
    int data;
    bstnode*left;
    bstnode*right;
};
bstnode*newnode(int x){
    struct bstnode*temp =(struct bstnode*)malloc(sizeof(struct bstnode*));
    temp->data=x;
    temp->left=temp->right=NULL;
    return temp;
}
bstnode* insert(bstnode* root,int x){
    bstnode*temp=newnode(x);
    if(root==NULL){
        root=temp;
    }
    else if(temp->data<=root->data){
        root->left=insert(root->left,x);
    }
    else if(temp->data>=root->data){
        root->right=insert(root->right,x);
    }
    return root;
}
bool search(bstnode* root,int num){
if(root==NULL)return false;
else if(root->data==num)return true;
else if(num<=root->data)return(search(root->left,num));
else return search(root->right,num);
}
int findmax(bstnode*root){
    if(root==NULL){
        cout<<"tree is empty \n";
        return 0;
    }
    else if(root->left=NULL){
        return root->data ;
        }
    return findmax(root->left);
}

int main(){
    bstnode*root=NULL;
    root=insert(root,50);
    root=insert(root,5);
    root=insert(root,25);
    root=insert(root,11);
    root=insert(root,17);
    int max =findmax(root);
    cout<<"the maximum number is :"<<max;


}