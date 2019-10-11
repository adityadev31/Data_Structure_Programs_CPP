#include<iostream>
using namespace std ;

int*func(int *arr, int size){               // int*func(int *arr)    to accept array as pointer and to return array as pointer
	int i=0;
	cout<<endl;
	for(i=0; i<size; i++){ cout<<arr[i]<<"  "; }
	return arr;
}

int main(){
	int a[10], i=0, *getArray;            // *getArray - to accept an array in the form of pointer by a function
	while(i!=10){
		cout<<"Enter a["<<i<<"]   ";
		cin>>a[i];
		i++;
	}
	i=0;
	while(i!=10){
		cout<<a[i]<<"  ";
		i++;
	}
	getArray = func(a,10);               // passing array (a)   and storing the accepted array in pointer getArray
	cout<<endl;
	for(i=0; i<10; i++){ cout<<getArray[i]<<"  "; }
	return 0;
}

