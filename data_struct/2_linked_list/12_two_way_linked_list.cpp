#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
};

node *head = NULL;

void insert(int Data){
	node *temp = new node;
	temp->data = Data;
	temp->next = NULL;
	temp->prev = NULL;
	if(head != NULL){
		temp->next = head;
		head->prev = temp;
	}
	head = temp;
}

void print(){
	node *temp = head;
	node *before = NULL;
	
	while(temp != NULL){                // printing forward
		cout<<temp->data<<", ";
		before = temp;
		temp = temp->next;
	}
	cout<<endl<<endl;
	
	while(before != NULL){                // printing backward
		cout<<before->data<<", ";
		before = before->prev;
	}
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	print();
	return 0;
}
