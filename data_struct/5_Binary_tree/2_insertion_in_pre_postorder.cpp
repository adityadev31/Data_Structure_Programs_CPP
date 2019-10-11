#include<iostream>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

node *root = NULL;



node*create(int x){
	node *temp = new node;
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

node*insert(node *root, int x){
	if(root==NULL){ return create(x); }
	if(x<root->data){ root->left=insert(root->left,x); }
	else if(x>root->data){ root->right = insert(root->right,x); }
	return root;
}


void inorder(node *root){                            // left root right
	if(root==NULL){ return; } 
	inorder(root->left); 
	cout<<root->data<<"  ";
	inorder(root->right); 
}


void preorder(node *root){                          // root left right
	if(root==NULL){ return; }
	cout<<root->data<<"  ";
	preorder(root->left);
	preorder(root->right);
}


void postorder(node *root){                          // left right root
	if(root==NULL){ return; }
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<"  ";
}




int main(){
	root = insert(root, 7);
	insert(root, 3);
	insert(root, 2);
	insert(root, 4);
	insert(root, 6);
	insert(root, 5);
	insert(root, 1);
	insert(root, 9);
	insert(root, 8);
	inorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	postorder(root);
	return 0;
}
