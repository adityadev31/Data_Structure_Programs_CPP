#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

node *head = NULL;

void insert(int Data){
	node *temp = new node;
	temp->data = Data;
	temp->next = NULL;
	if(head != NULL){
		temp->next = head;
	}
	head = temp;
}

void print(){
	cout<<endl;
	node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<", ";
		temp = temp->next;
	}
}


void searching(int key){
	node *temp = head;
	while(temp != NULL && temp->data < key){    // ex- if key = 5 then traversal till 4
		temp = temp->next;
	}
	if(temp == NULL){
		cout<<endl<<"Key not found";
	}
	else{
		cout<<endl<<key<<" found at "<<temp<<endl;
	}
}

int main(){
	insert(0);
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	insert(8);
	print();
	searching(9);
	return 0;
}
