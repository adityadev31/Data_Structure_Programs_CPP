#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

node *head = NULL;

void insert(int datas){
	node *temp = new node;
	temp->data = datas;
	temp->next = NULL;
	
	if(head!=NULL)
		temp->next = head;
		
	head = temp;
}

void interchange(){
	if(head==NULL){return;}
	if(head->next==NULL){return;}
	if(head->next->next==NULL){
		head->next->next = head;
		head = head->next;
		head->next->next=NULL;
		return;
	}
		
		
	node *l=head;
	node *m=l->next;
	node *r=m->next;
	
	while(m!=NULL){
		if(l==head){ l->next = NULL; }
		m->next=l;
		if(r==NULL){ break; }
		l=m;
		m=r;
		r=r->next;
	}
	head = m;
}

void print(){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<", ";
		temp=temp->next;
	}
	cout<<endl<<endl;
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	print();
	interchange();
	print();
	return 0;
}
