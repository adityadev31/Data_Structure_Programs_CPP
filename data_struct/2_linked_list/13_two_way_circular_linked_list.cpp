#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
	node *back;
};

node *head = NULL;
node *last = NULL;

void insert(int Data){
	node *temp = new node;
	temp->data = Data;
	temp->next = NULL;
	temp->back = NULL;
	if(head == NULL){
		last = temp;
	}
	else{
		temp->next = head;
		temp->back = last;
		last->next = temp;
	}
	head = temp;
}


void print(){
	node *temp = head;
	while(temp != last){
		cout<<temp->data<<", ";
		temp = temp->next;
	}
	cout<<last->data<<endl;
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	print();
	return 0;
}
