#include<iostream>
using namespace std;

class Array{
	private:
		int a[10];
		static int n;
	public:
		void insert(int data);
		void deletion(int loc);
		void print();
};

int Array::n;
void Array::insert(int data){
	if(n<=10){
		a[n] = data;
		n++;
	}
}

void Array::deletion(int loc=n-1){
	if(n>=0){
		for(int i=loc; i<n; i++){
			a[i] = a[i+1];
		}
	}
	n--;
}

void Array::print(){
	cout<<endl;
	int i=0;
	while(i!=n){
		cout<<a[i]<<", ";
		i++;
	}
}


int main(){
	Array ob;
	ob.insert(0);
	ob.insert(1);
	ob.insert(2);
	ob.insert(3);
	ob.insert(4);
	ob.insert(5);
	ob.print();
	ob.deletion(3);
	ob.print();
	ob.deletion(0);
	ob.print();
	return 0;
}
