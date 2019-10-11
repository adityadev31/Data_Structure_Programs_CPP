#include<iostream>
using namespace std;


int fun(int x){
	if(x<=0)
		return 0;
	int small = fun(x-1);      // this will find sum till 5 to 0 and store it to small
	return small+x;            // small + 6
}

int main(){
	cout<<" = "<<fun(6);     
	return 0;
}

