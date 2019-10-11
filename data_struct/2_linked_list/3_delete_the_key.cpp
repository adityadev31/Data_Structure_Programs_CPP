/*
 *       DELETION AT A GIVEN KEY
 */



#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node *head = NULL;

void push(int Data){
	node *temp = new node;
	temp->data = Data;
	
	if(head==NULL){  temp->next = NULL; }
	else{ temp->next = head; } 
	
	head = temp; 
}


void print(){
	
	if(head == NULL){ cout<<endl<<"Nothing to print"<<endl<<endl; }
	else{
		node *temp = head;
		while(temp != NULL){
			cout<<temp->data<<" ";
			temp = temp->next;
		}
	}
	cout<<endl<<endl;
}


void delNode(node *temp, int key)
{
	if(temp == NULL){ cout<<"Nothing to delete"<<endl; }
	else
	{
		node *prev = NULL;
		int count = 0;
		
		while(temp != NULL)
		{
			if(head->data == key)
			{
				head = head->next;
				temp = head;
				count++;
				continue;
			}
			else if(temp->data == key)                  // if key is found
			{
				prev->next = temp->next;                // jump
				temp = temp->next;
				count++;
			}
			else                                         // normal move
			{
				prev = temp;
				temp = temp->next;
			}
			
		}
		if(count == 0){
			cout<<key<<" key not found"<<endl<<endl;
		}
		cout<<"List ends here"<<endl;
	}
	
}

int main(){
	push(0);
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	push(7);
	push(8);
	print();
	delNode(head, 6);
	print();
	delNode(head, 2);
	print();
	delNode(head, 0);
	print();
	delNode(head, 99);
	print();
	return 0;
}
