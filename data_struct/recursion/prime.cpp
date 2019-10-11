#include<iostream>
using namespace std;


// prime

bool prime(int n, int i=2){
	
	if(n==2)              // for 2
		return true;
	
	if(n%i == 0)         // for 3 and more
		return false;
		
	if(i*i < n)          // check case
		return prime(n, i+1);
	
	return true;
}


// main

int main(){
	if(prime(8))
		cout<<"prime";
	else 
		cout<<"not prime";
	return 0;
}

