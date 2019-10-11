#include<iostream>
using namespace std;

class Stack{
	private:
		int top, l;
		char *array;
		string eq;
	public:
		Stack();
		void getEquation();
		void push(char);
		void pop();
		void checkParanthesis();
};

Stack::Stack(){top=-1;}    // constructor

void Stack::getEquation(){
	cout<<"Enter the equation:\t";
	cin>>eq;
	l = eq.length();
	array = new char[l];
}

void Stack::push(char x){
	top++;
	array[top]=x;
}

void Stack::pop(){
	top--;
}

void Stack::checkParanthesis(){
	
	for(int i=0; i<l; i++){
		
		if((eq[i]=='(')||(eq[i]=='{')||(eq[i]=='['))
			push(eq[i]);
			
		else{
			if(eq[i]==')' && array[top]=='(')
				pop();
			
			else if(eq[i]==']' && array[top]=='[')
				pop();
			
			else if(eq[i]=='}' && array[top]=='{')
				pop();
				
			else if((eq[i]==')' && array[top]!='(')||(eq[i]==']' && array[top]!='[')||(eq[i]=='}' && array[top]!='{')){
				top = 0;
				break;
			}
		}
	}
	
	if(top==-1)
		cout<<"Parenthesis are correct";
	
	else
		cout<<"Wrong Parenthesis";
}

int main(){
	Stack ob;
	ob.getEquation();
	ob.checkParanthesis();
	return 0;
}

