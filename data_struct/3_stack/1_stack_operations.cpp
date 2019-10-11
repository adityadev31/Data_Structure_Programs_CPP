#include<iostream>
using namespace std;

class Stack{
	private:
		int *a, size, top;
	public:
		Stack();
		void push(int data);
		void pop();
		void print();
};


Stack::Stack(){
	top = -1;
	cout<<"Enter the size: \t";
	cin>>size;
	a = new int[size];
}

void Stack::push(int data){
	if(top==size-1){
		cout<<endl<<"overflow"<<endl;
		return;
	}
	else{
		top++;
		a[top]=data;
	}
}

void Stack::pop(){
	if(top==-1){
		cout<<endl<<"Underflow"<<endl;
		return;
	}
	else{ top--; }
}

void Stack::print(){
	if(top==-1){
		cout<<endl<<"Nothing to print"<<endl;
		return;
	}
	int i=0;
	while(i<=top){
		cout<<a[i]<<", ";
		i++;
	}
	cout<<endl<<endl;
}



int main(){
	Stack ob;
	ob.push(1);
	ob.push(2);
	ob.push(3);
	ob.push(4);
	ob.push(5);
	ob.print();
	ob.pop();
	ob.pop();
	ob.print();
	return 0;
}
