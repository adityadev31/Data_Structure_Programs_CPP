#include<iostream>
using namespace std;

struct node{
	int coeff;
	int expo;
	node *next;
};

node *head[3];
node *last = NULL;

void insert(int num){
	int terms,a,x;
	cout<<"Enter the no. of terms: \t";
	cin>>terms;
	while(terms != 0){
		cout<<"Coeff = ";
		cin>>a;
		cout<<"Expo = ";
		cin>>x;
		
		node *temp = new node;
		temp->coeff = a;
		temp->expo = x;
		temp->next = NULL;
		
		if(head[num]==NULL){
			head[num] = temp;
			last = temp;
		}
		else{
			last->next = temp;
			last = temp;
		}
		terms--;
	}
}


void print(int num){
	cout<<"\n";
	node *temp = head[num];
	while(temp != NULL){
		cout<<temp->coeff<<" (X^"<<temp->expo<<")  +  ";
		temp = temp->next;
	}
	cout<<"\n\n";
}


void sum(){
	node *p=head[0];
	node *q=head[1];
	
	while(p!=NULL && q!=NULL){
		
		if(p!=head[0] || q!=head[1]){ cout<<" + "; }
		
		if(p->expo > q->expo){
			cout<<p->coeff<<" (X^"<<p->expo<<") ";
			p = p->next;
		}
		else if(q->expo > p->expo){
			cout<<q->coeff<<" (X^"<<q->expo<<") ";
			q = q->next;
		}
		else if(p->expo == q->expo){
			cout<<(q->coeff + p->coeff)<<" (X^"<<q->expo<<") ";
			q = q->next;
			p = p->next;
		}
		
	}
	
}


int main(){
	insert(0);
	print(0);
	insert(1);
	print(1);
	sum();
	print(2);
	return 0;
}
