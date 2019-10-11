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
	
	if(head!=NULL){
		temp->next = head;	
	}
	head = temp;
}


void del(int index){
	node *temp = head;
	if(index==0){
		head=head->next;
		temp=head;
	}
	else{
		node *prev = NULL;
		int i=1;
		while(i <= index){
			prev = temp;
			temp = temp->next;
			i++;
		}
		if(temp->next!=NULL){
			prev->next = temp->next;	
		}
		else{
			prev->next=NULL;
		}
	}
}


void print(){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl<<endl;
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
	insert(9);
	insert(10);
	print();
	del(9);
	print();
	del(5);
	print();
	del(0);
	print();
	return 0;
}
