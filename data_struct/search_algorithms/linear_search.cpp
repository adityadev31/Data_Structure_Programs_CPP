#include<iostream>
using namespace std;


class Searching{
	private: int *arr, size;
	public:
		void getlist();
		void linearSearch(int);
		void binarySearch(int, int, int);
};

// getting the list

void Searching::getlist(){
	cout<<"Enter the size of your list \t";
	cin>>size;
	cout<<endl;
	arr = new int[size];
	
	cout<<"Sno.  item"<<endl<<endl;
	for(int i=0; i<size; i++){
		cout<<i<<" \t";
		cin>>arr[i];
	}
}


// doing the linear search

void Searching::linearSearch(int key){
	int i=0;
	while(arr[i] != key && i<size){ i++; }
	if(arr[i]==key){ cout<<"Key found at Sno. "<<i<<endl; }
	else{ cout<<"Key not found"<<endl; }
}




int main(){
	Searching ob;
	ob.getlist();
	ob.linearSearch(3);
	return 0;
}



