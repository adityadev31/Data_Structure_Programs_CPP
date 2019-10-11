#include<iostream>
using namespace std;


class Array{
	private:
		static int n;                // n = last location of insertion
		int a[10];
	public:
		void insert(int data, int loc);
		void print();
};

int Array::n;

void Array::insert(int data, int loc=n){    // location to be inserted , default location = n i.e, last location
	if(n>10){
		cout<<endl<<"Overflow"<<endl;
		return;
	}
	else if(n==loc){
		a[loc] = data;
	}
	else if(loc<n){
		for(int i=n; i>=loc; i--){
			a[i+1]=a[i];
		}
		a[loc] = data;
	}
	n++;
}


void Array::print(){
	cout<<endl;
	if(n>10){n=10;}
	int i=0;
	while(i<n){
		cout<<a[i]<<", ";
		i++;
	}
}


int main(){
	Array ob;
	ob.insert(0);   // insert 0 with default location
	ob.insert(1);
	ob.insert(2);
	ob.insert(3);
	ob.insert(4);
	ob.insert(5);
	ob.insert(6);
	ob.print();
	ob.insert(100,3); // insert 100 in location index = 3
	ob.print();
	ob.insert(200,3);
	ob.print();
	ob.insert(600,3);
	ob.print();
	return 0;
}

