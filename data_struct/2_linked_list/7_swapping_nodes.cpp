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
		temp->next=head;
	}
	head = temp;
}


void swapper(int a, int b){
	node *prev1, *prev2, *temp, *temp1, *temp2;
	temp = head;
	int i=1;
	if(head != NULL){
		if(a == 1){
			prev1 = head;
		}
		else{
			while(i < a){
				temp = temp->next;
				i++;
			}	
			prev1 = temp;
		}
		int i=1;
		temp = head;
		while(i<b){
			temp = temp->next;
		}
		prev2 = temp;
		
		
		temp1 = prev1->next;           // temp1 is used to store next values of the previous ones
		prev1->next = prev2->next;		// swapping prev address
		prev2->next = temp1; 
		
		
		temp2 = prev1->next->next;          // swapping prev->next->next is (swapping nodes) address
		prev1->next->next = prev2->next->next;
		prev2->next->next = temp2;
		
	}
	else{
		cout<<"no list"<<endl;
		return;
	}
}


void print(){
	node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
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
	swapper(1,4);
	print();
	return 0;
}
