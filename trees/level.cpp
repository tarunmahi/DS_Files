//cpp program for level order traversal
#include<iostream>
#include<queue>
using namespace std;
struct node{
    char data;
    node*left;
    node*right;
};
void LevelOrder(node*root){
    if(root==NULL)return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
       node*temp=q.front();
       cout<<" "<<temp->data;
       if(temp->left!=NULL) q.push(temp->left);
       if(temp->right!=NULL)q.push(temp->right);
       q.pop();
    }
}
node*Insert(node*root,char val){
if(root==NULL){
    root=new node();
    root->data=val;
    root->left=root->right=NULL;
}
else if(val<=root->data){
    root->left=Insert(root->left,val);
}
else if(val>=root->data){
    root->right=Insert(root->right,val);
}
return root;
}

void inorder(node*root){
    if(root==NULL)return;
    cout<<" "<<root->data;
    inorder(root->left);
    inorder(root->right);
}
void postorder(node*root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<" "<<root->data;
}
void preorder(node*root){
    if(root==NULL)return;
    cout<<" "<<root->data;
    preorder(root->left);
    preorder(root->right);
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
	node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z'); 
	root = Insert(root,'A'); root = Insert(root,'C');
	//Print Nodes in Level Order. 
	LevelOrder(root);
    cout<<"\n";
    inorder(root);
    cout<<"\n";
    postorder(root);

}