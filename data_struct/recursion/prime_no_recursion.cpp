#include<iostream>
using namespace std;


bool check(int n, int i=2){
	if(n==2)               // terminating cond. 1
		return true;
	
	if(n%i==0)            // terminating cond. 2
		return false;
		
	if(i*i>n)            //  terminating cond. 3        if  (i*i > n)  then no further check is required    (is Prime)
		return  true;
		
	return check(n,i+1);
}


int main(){
	int num;
	cout<<"Enter the no. \t";
	cin>>num;
	
	if(check(num))
		cout<<"yes";
		
	else
		cout<<"no";
		
	return 0;
	
}
