#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

node *head = NULL;

void insert(int new_data){
	node *temp = new node;
	temp->data = new_data;
	temp->next = NULL;
	if(head != NULL){
		temp->next = head;
	}
	head = temp;
}

void print(){
	node *temp = head;
	if(head == NULL){
		cout<<"No list"<<endl<<endl;
	}
	else{
		while(temp != NULL){
		cout<<temp->data<<", ";
		temp = temp->next;
		}
	}
}

void count(node*temp, int length = 0){
	if(temp == NULL){
		cout<<"Length = "<<length<<endl;
		return;
	}
	else{
		length++;
		count(temp->next, length);
	}
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	count(head,0);
	print();
	return 0;
}
