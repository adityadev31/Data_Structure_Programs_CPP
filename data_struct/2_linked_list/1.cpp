/*

	This is for intro 
	
	all insertion deletion method

*/




#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};

Node *head = NULL;


Node*createNode(int new_data){
	Node *temp = new Node;
	temp->data = new_data;
	temp->next = NULL;
	return temp;
}

void insert_at_head(int new_data){
	Node *new_node = createNode(new_data);
	new_node->next = head;
	head = new_node;
}

void insert_at_end(int data){
	Node *new_node = createNode(data);
	Node *trav = head;
	while(trav->next != NULL){
		trav = trav->next;
	}
	trav->next = new_node;
}

void insert_at_position(int index, int new_data){
	Node *trav = head;
	while(index != 1){
		trav = trav->next;
		index--;
	}
	Node *temp = trav->next;
	trav->next = createNode(new_data);
	trav->next->next = temp;
}


void pop_head(){
	head = head->next;
}

void pop_end(){
	Node *trav = head;
	while(trav->next->next != NULL){
		trav = trav->next;
	}
	trav->next = NULL;
}


void pop_at_position(int index){
	Node *trav = head;
	while(index != 1){
		trav = trav->next;
		index--;
	}
	trav->next = trav->next->next;
}



void print_list(){
	Node *trav = head;
	while(trav != NULL){
		cout<<trav->data<<" ";
		trav = trav->next;
	}
}

int main(){
	insert_at_head(1);
	insert_at_head(2);
	insert_at_head(3);
	insert_at_head(4);
	insert_at_head(5);
	print_list(); cout<<endl;
	
	insert_at_end(6);
	insert_at_end(7);
	insert_at_end(8);
	insert_at_end(9);
	print_list(); cout<<endl;
	
	insert_at_position(5, 0);
	print_list(); cout<<endl;
	
	pop_head();
	print_list(); cout<<endl;
	
	pop_head();
	print_list(); cout<<endl;
	
	pop_end();
	print_list(); cout<<endl;
	
	pop_end();
	print_list(); cout<<endl;
	
	pop_at_position(5);
	print_list(); cout<<endl;
	
	return 0;
}
