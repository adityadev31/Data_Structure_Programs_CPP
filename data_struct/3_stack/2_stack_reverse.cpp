#include<iostream>
using namespace std;

class Stack{
	private:
		int *a, size, top;
	public:
		Stack();
		void push(int);
		void pop();
		void print();
};

Stack::Stack(){
	top==-1;
	cout<<"enter the size: \t";
	cin>>size;
	a = new int[size];
}

void Stack::push(int data){
	if(top==size-1){
		cout<<endl<<"Overflow"<<endl;
		return;
	}
	top++;
	a[top]=data;
}

void Stack::pop(){
	if(top==-1){
		cout<<endl<<"Underflow"<<endl;
		return;
	}
	top--;
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
}

int main(){
	
}
