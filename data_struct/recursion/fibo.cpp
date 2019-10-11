#include<iostream>
using namespace std;


void fibo(int terms, int a=0, int b=1){
	if(terms != 0){
		cout<<a<<" ";
		fibo(terms-1, b, a+b);
	}
	else{
		return;
	}
}


int main(){
	fibo(10);
	return 0;
}
