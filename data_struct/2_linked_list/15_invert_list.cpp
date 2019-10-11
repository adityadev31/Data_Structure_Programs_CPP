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
	cout<<endl;
	node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<", ";
		temp = temp->next;
	}
	cout<<endl;
}


void invert(){
	node *l = head;              //     l  -->  m  -->  r
	node *m = l->next;
	node *r = m->next;
	
	if(m==NULL){ return;}             // ( if only one link )
	
	if(r==NULL){                      // ( if only two links )
		l->next = NULL;
//		m->next = l;                  // commented coz its done int the last part of the function
//		head = m;
	}
	
	while(r != NULL){                      // ( if more than two links )
		if(l==head){ l->next = NULL; }
		m->next = l;                     // linking   l <-- m
		l = m;                           // shifting   l  m  r
		m = r;
		r = r->next;
	}
	m->next = l;
	head = m;                   // putting head to the end i.e ' m ' 
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	print();
	invert();
	print();
	return 0;
}
