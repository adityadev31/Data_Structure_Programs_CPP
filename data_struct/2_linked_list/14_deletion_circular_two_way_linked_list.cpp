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
	temp->next = NULL;
	temp->back = NULL;
	temp->data = Data;
	if(head == NULL){
		last = temp;
	}
	else{
		temp->next = head;
		temp->back = last;
		last->next = temp;
		head->back = temp;
	}
	head = temp;
}

void print(){
	node *temp = head;
	cout<<endl;
	while(temp != last){
		cout<<temp->data<<", ";
		temp = temp->next;
	}
	cout<<last->data<<endl;
}

void deleted(int key){
	node *temp = head;
	while(temp->data!=key){
		if(temp==last){break;}       // check for last before moving forward
		temp = temp->next;
	}
	if(temp->data==key){
		temp->back->next = temp->next;
		temp->next->back = temp->back;
		if(temp==head){head = temp->next;}
		else if(temp==last){last = temp->back;}
	}
	else{
		cout<<"key not found"<<endl;
	}
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	print();
	deleted(4);
	print();
	deleted(9);
	print();
	return 0;
}
