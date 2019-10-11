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
	node *temp = head;
	cout<<endl;
	while(temp != NULL){
		cout<<temp->data<<", ";
		temp = temp->next;
	}
	cout<<endl;
}


void find_max(){
	node *temp = head;
	node *max = head;
	while(temp != NULL){
		if(max->data < temp->data){
			max = temp;
		}
		temp = temp->next;
	}
	cout<<endl<<"Max = "<<max->data;
}


int main(){
	insert(7);
	insert(2);
	insert(8);
	insert(1);
	insert(0);
	insert(5);
	insert(6);
	insert(3);
	insert(4);
	insert(9);
	insert(11);
	insert(10);
	print();
	find_max();
	return 0;
}
