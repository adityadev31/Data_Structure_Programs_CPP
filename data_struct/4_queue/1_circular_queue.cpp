#include<iostream>
using namespace std;

class Queues{
	private: 
		int *a, size, front, rear;
	public:
		Queues();
		void enqueue(int data);
		void dequeue();
		void print();
};


Queues::Queues(){                                 // constructor
	cout<<"Enter the size of the queue \t";
	cin>>size;
	a = new int[size];
	front = rear = -1;
}


void Queues::enqueue(int data){    								  // 3 - conditions
	if((front==0 && rear==size-1) || (rear == front-1)){         // overflow conditions
		cout<<"overflow! no space to insert data"<<endl<<endl;
		return;
	}
	else if(front==-1 && rear==-1){                             // non initiated list
		front++;
		rear++;
		a[front] = data;
	}
	else{
		rear = (rear+1)%size;
		a[rear] = data;
	}
}


void Queues::dequeue(){
	if(front==-1 && rear==-1){     // underflow
		cout<<"Underflow condition nothing to delete"<<endl<<endl;
		return;
	}
	else if(front==rear){
		front=-1;
		rear=-1;
		return;
	}
	else{
		front++;
	}
}


void Queues::print(){
	int i=front;
	cout<<endl<<endl;
	if(front==-1){
		cout<<"no queue";
	}
	else{
		while(i!=rear){
		cout<<a[i]<<", ";
		i = (i+1)%size;
		}	
		cout<<a[i]<<endl<<endl;
	}
}

int main(){
	Queues ob;
	ob.enqueue(0);
	ob.enqueue(1);
	ob.enqueue(2);
	ob.enqueue(3);
	ob.enqueue(4);
	ob.enqueue(5);
	ob.enqueue(6);
	ob.enqueue(7);
	ob.enqueue(8);
	ob.enqueue(9);
	ob.print();
	ob.dequeue();
	ob.dequeue();
	ob.dequeue();
	ob.dequeue();
	ob.print();
	ob.enqueue(10);
	ob.enqueue(11);
	ob.enqueue(12);
	ob.enqueue(13);
	ob.enqueue(14);
	ob.print();
	ob.dequeue();
	ob.dequeue();
	ob.dequeue();
	ob.print();
	ob.enqueue(15);
	ob.enqueue(16);
	ob.print();
	return 0;
}
