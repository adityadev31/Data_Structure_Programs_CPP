#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

node *head = NULL;

void insert(int newData){
	node *temp = new node;
	temp->data = newData;
	temp->next = NULL;
	
	if(head != NULL){
		temp->next = head;
	}
	head = temp;
}

void print(){
	node *jump = head; int count=0;
	if(head == NULL){
		cout<<"Nothing to print";
	}
	else{
		while(jump != NULL){
		cout<<jump->data<<", ";
		jump = jump->next;
		count++;
		}	
	}
	cout<<endl<<endl<<"Length of the list = "<<count<<endl<<endl;
}


int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	insert(8);
	insert(9);
	print();
	return 0;
}

