#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

int count_nodes=0;

node *head = NULL;
node *tail = NULL;

//create node
node*create(int x){
	node *temp = new node;
	temp->data = x;
	temp->next = NULL;
	return temp;
}

//insert node
void insert(int x, int index=count_nodes){
	
	node *temp = create(x);
	
	// head=NULL
	if(head==NULL){
		head = temp;
		tail = temp;
		count_nodes++;
		return;
	}
	// at head
	if(index==0){
		temp->next = head;
		head = temp;
	}
	
	//at tail
	else if(index==count_nodes){
		tail->next = temp;
		tail = temp;
	}
	
	//in between
	else{
		if(index>0 && index<count_nodes){
			node *prev = NULL;
			node *travel = head;
			int i=1;
			while(i<index){
				prev = travel;
				travel = travel->next;
				i++;
			}
			prev->next = temp;
			temp->next = travel;
		}
	}
	count_nodes++;
}


//print
void print(){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl<<endl;
}

int main(){
	insert(1,0);    // x,0  =  head
	insert(2,0);
	insert(3,0);
	insert(4,0);
	insert(5,0);
	insert(6,0);
	insert(7,0);
	print();
	insert(11);    // x = tail
	insert(12); 
	insert(13);
	insert(14);
	insert(15);
	insert(16);
	print();
	insert(99,3);  // inserting 99 at 3
	print();
	return 0;
}
