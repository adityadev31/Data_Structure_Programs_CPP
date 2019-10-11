// This for deleting the given key 

#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node *head = NULL;

node*createNode(int newData){
	node *temp = new node;
	temp->data = newData;
	temp->next = NULL;
	return(temp);
}

void push(int newData){
	node *temp = createNode(newData);
	
	if(head == NULL){ head = temp; }     // 1) no list
		
	else{   							// 2) there is a list
		temp->next = head;
		head = temp;
	}
}


int printList(node *jumper){
	if(jumper == NULL){
		cout<<endl<<endl;
		return 0;
	}
	else{
		cout<<jumper->data<<" ";
		printList(jumper->next);
	}
}

int count = 0;

void deleteNode(node *jumper, int key){       // note jumper == previous node
	if(head == NULL){
		cout<<"No list"<<endl<<endl;
	}
	else if(head->data == key){
		cout<<"key found and deleted"<<endl;
		head = head->next;
		count++;
		deleteNode(head, key);
	}
	else if(jumper->next==NULL){
		if(count != 0){
			cout<<"list ends here"<<endl;	
		}
		else{
			cout<<"key not found"<<endl;
		}
		count=0;
	}
	else if(jumper->next->data == key){
		jumper->next = jumper->next->next;
		cout<<key<<" successfully deleted"<<endl;
		count++;
		deleteNode(jumper, key);
	}
	else if(jumper->next->data != key){
		deleteNode(jumper->next, key);
	}
}



int main(){
	deleteNode(head, 5);
	push(0);
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	printList(head);
	deleteNode(head, 3);
	printList(head);
	deleteNode(head, 10);
	printList(head);
	deleteNode(head, 5);
	printList(head);
	deleteNode(head, 3);
	printList(head);
	return 0;
}
