#include<iostream>
using namespace std;



								//  --------------------------------------------------------
								// |   TOP1  -->  |      |     |     |    <-- TOP2  |    |     |
								// ---------------------------------------------------------                         


class Stack{
	private:
		int *a, size, top1, top2;
	public:
		Stack();
		void push1(int);
		void pop1();
		void push2(int);
		void pop2();
		void print(int);
};

Stack::Stack(){
	cout<<"Enter the size of the array: \t";
	cin>>size;
	a = new int[size];
	top1 = -1;
	top2 = -1;
}

void Stack::push1(int data){
	if((top1 == top2-1) || (top1 == size-1)){
		cout<<endl<<"Overflow"<<endl;
	}
	else{
		top1++;
		a[top1] = data;
	}
}


void Stack::push2(int data){
	if(top2==-1){
		top2 = size-1;
		a[top2] = data;
		return;
	}
	else if((top2 == top1+1) && (top2 == 0)){
		cout<<endl<<"Overflow"<<endl;
	}
	else{
		top2--;
		a[top2] = data;
	}
}


void Stack::pop1(){
	if(top1==-1){
		cout<<endl<<"Underflow"<<endl;
		return;
	}
	else{
		top1--;
	}
}


void Stack::pop2(){
	if(top2==-1){
		cout<<endl<<"Underflow"<<endl;
		return;
	}
	else{
		top2++;
	}
}

void Stack::print(int x){
	if(x==1){
		if(top1>-1){
			int i=0;
			while(i<=top1){
				cout<<a[i]<<", ";
				i++;
			}
		}
	}
	else if(x==2){
		if(top2>-1){
			int i=size-1;
			while(i>=top2){
				cout<<a[i]<<", ";
				i--;
			}
		}
	}
}




int main(){
	Stack ob;
	ob.push1(1);
	ob.push1(2);
	ob.push1(3);
	ob.push1(4);
	ob.push1(5);
	ob.push2(10);
	ob.push2(9);
	ob.push2(8);
	ob.print(1);
	ob.print(2);
	return 0;
}
