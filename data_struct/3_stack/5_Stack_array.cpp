#include<iostream>
using namespace std;

class Stack{ 
	private:
		int *A, N, Top;     // N = size of the stack      Top max = N-1
	public:
		void get();
		bool isFull();
		bool isEmpty();
		void push(int);
		void pop();
		void print();
};


void Stack::get(){
	cout<<"Enter the size: \t";
	cin>>N;
	Top = -1;
	A = new int[N];
}


bool Stack::isFull(){
	if(Top==N-1)
		return true;
	return false;
}

bool Stack::isEmpty(){
	if(Top==-1)
		return true;
	return false;
}

void Stack::push(int x){
	if(isFull())
		return;
	Top++;
	A[Top] = x;
}

void Stack::pop(){
	if(isEmpty())
		return;
	Top--;
}

void Stack::print(){
	if(isEmpty()){ 
		cout<<endl<<"Nothing to print   :("<<endl; 
		return;
	}
	int i=0;
	cout<<endl;
	while(i<=Top){
		cout<<A[i]<<"  ";
		i++;
	}
}

int main(){
	Stack ob;
	ob.get();
	ob.push(1);          // inserting 8 items
	ob.push(2);
	ob.push(3);
	ob.push(4);
	ob.push(5);
	ob.push(6);
	ob.push(7);
	ob.push(8);
	ob.print();         // printing 
	ob.pop();           // removing 3 items
	ob.pop();
	ob.pop();
	ob.print();         // printing
	ob.pop();           // removing rest 5 items
	ob.pop();
	ob.pop();
	ob.pop();
	ob.pop();
	ob.print();         // printing
	ob.pop();           // removing from empty stack
	ob.print();         // printing
	return 0;
}
