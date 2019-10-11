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
	if(head != NULL){temp->next = head;}
	head = temp;
}

void circular(){
	node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = head;
}

void print(){
	cout<<endl;
	node *temp = head;
	while(temp->next != head){
		cout<<temp->data<<", ";
		temp = temp->next;
	}
	cout<<endl;
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	print();
	circular();
	print();
	return 0;
}
