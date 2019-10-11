#include<iostream>
using namespace std;

bool check(int num){
	if(num==2)
		return true;
	
	else{
		for(int i=2; i<=num/2; i++){
			if(num%i==0)
				return false;
		}
	}
	
	return true;
}

int main(){
	int terms;             // list of all prime numbers under terms
	cout<<"Enter num :\t";
	cin>>terms;
	int num=2;
	while(num<=terms){
		if(check(num))
			cout<<num<<" ";
			
		num++;
	}
	
	return 0;
}
