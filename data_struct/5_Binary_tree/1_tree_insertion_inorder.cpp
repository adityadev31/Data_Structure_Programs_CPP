#include<iostream>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

node *root = NULL;

node*create(int datas){
	node *temp = new node;
	temp->data = datas;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

node*insert(node *root, int datas){
	
	// if root = NULL
	if(root==NULL){ return create(datas); }
	
	if(datas<root->data){root->left = insert(root->left,datas);}
	
	else if(datas>root->data){root->right = insert(root->right,datas);}
	
	return root;
}

void inorder(node *root){
	
	// left
	if(root->left!=NULL){ inorder(root->left); }
	
	//printing data after deepest left
	cout<<root->data<<"  ";
	
	//right
	if(root->right!=NULL){ inorder(root->right); }
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
	return 0;
}
