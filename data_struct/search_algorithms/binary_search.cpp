#include<iostream>
using namespace std;

class Binary{
	private:                                   // ** NOTE **  for binary search list must be sorted
		int *a, size;
	public:
		void getlist();
		void sortlist();                 // bubble sort
		void binarysearch(int);
};

void Binary::getlist(){
	cout<<"Enter the size of the list: \t";
	cin>>size;
	a = new int[size];
	cout<<endl<<"Sno.    item"<<endl;
	for(int i=0; i<size; i++){
		cout<<i<<"\t  ";
		cin>>a[i];
	}
	sortlist();
}


void Binary::sortlist(){
	int i,j,temp;
	for(j=1; j<size; j++){
		for(i=0; i<size-j; i++){
			if(a[i]>a[i+1]){
				temp = a[i+1];
				a[i+1] = a[i];
				a[i] = temp;
			}
		}
	}
	cout<<endl<<endl<<"Sorted array:- "<<endl<<endl;
	cout<<"Sno.    item"<<endl;
	for(i=0; i<size; i++){
		cout<<i<<"\t  "<<a[i]<<endl;
	}
	cout<<endl<<endl;
}


void Binary::binarysearch(int key){
	int l=0,r=size-1,m,flag=0;
	while(l<=r){
		m=(l+r)/2;
		if(a[m]==key){
			cout<<"key found at index "<<m<<endl;
			flag++;
			return;
		}
		else{
			if(a[m]>key){
				r=m-1;
			}
			else if(a[m]<key){
				l=m+1;
			}
		}
	}
	if(flag==0){
		cout<<"key not found"<<endl;
	}
}

int main(){
	Binary ob;
	ob.getlist();
	ob.binarysearch(5);
	
	return 0;
}
