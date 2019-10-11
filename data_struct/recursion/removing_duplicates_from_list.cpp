#include<iostream>
using namespace std;


struct node{
	int data;
	node *next;
};

node *head = NULL;
node *tail = NULL;

node*create(int info){
	node *temp = new node;
	temp->data = info;
	temp->next = NULL;
	return temp;
}


void insert(int info){
	node *temp = create(info);
	
	if(head == NULL)
		head = tail = temp;
	
	else{
		tail->next = temp;
		tail = tail->next;
	}
}


void print(){
	node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}


void removeDuplicates(node *p1, node *p2){
	
	if(p2 == NULL){
		p1->next = NULL;
		return;
	}
	
	else if(p1->data == p2->data)
		removeDuplicates(p1, p2->next);
		
	else if(p1->data != p2->data){
		p1->next = p2;
		removeDuplicates(p1->next, p2->next);
	}
}


int main(){

	insert(1);
	insert(2);
	insert(2);
	insert(333);
	insert(333);
	insert(333);
	insert(444);
	insert(444);
	print();
	cout<<endl<<endl;
	removeDuplicates(head, head->next);
	print();
	return 0;
}

