#include<iostream>
using namespace std;

struct node{
	int coeff;
	int expo;
	node *next;
};

node *head = NULL;
node *last = NULL;

void insert(){
	int terms,a,x;
	cout<<"Enter the no of terms:\t";
	cin>>terms;
	while(terms != 0){
		
		node *temp = new node;
		cout<<"enter coefficients: \t";
		cin>>a;
		cout<<"enter power: \t";
		cin>>x;
		
		temp->coeff = a;
		temp->expo = x;
		temp->next = NULL;
		
		if(head==NULL){
			head = temp;
			last = temp;
		}
		else{
			last->next = temp;
			last = temp;
		}
		terms--;
	}
}

void print(){
	node *temp = head;
	while(temp != NULL){
		cout<<temp->coeff<<"(X^"<<temp->expo<<")  +  ";
		temp = temp->next;
	}
}

int main(){
	insert();
	print();
	return 0;
}
