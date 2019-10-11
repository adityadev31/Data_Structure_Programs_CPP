#include<iostream>
using namespace std;

static int count=0;


void counter(){
	count++;
}



void TOH(int n, char from, char middle, char to){
	if(n==1){
		cout<<from<<"->"<<to<<endl;
		counter();
		return;
	}
	TOH(n-1, from, to, middle);
	cout<<from<<"->"<<to<<endl;
	counter();
	TOH(n-1, middle, from, to);
}

int main(){
	int disks;
	cout<<"Enter the no. of disks: \t";
	cin>>disks;
	TOH(disks, 'A','B','C');
	cout<<endl<<count<<endl;
	return 0;
}
