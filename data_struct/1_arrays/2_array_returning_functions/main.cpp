#include<iostream>
using namespace std;



int*getArray(int x[], int size){
	int i=0;	
	while(i != size){
		cout<<"Enter a["<<i<<"] = ";
		cin>>x[i];
		i++;
	}
	return x;
}




int*revArray(int arr[],int size){
	int start=0, end=size-1, temp;
	while(start < end){
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++; end--;
	}
	return arr;
}




void printArray(int x[], int size){
	int i=0;
	while(i != size){
		cout<<"a["<<i<<"] = "<<x[i]<<endl;
		i++;
	}
}


int main(){
	int *a, size;     // we always have to use pointer to catch arrays from other functions
	
	cout<<"Enter the size of the array: \t";
	cin>>size;
	
	a = new int[size];
	
	a = getArray(a,size);
	
	a = revArray(a,size);
	
	printArray(a,size);
	
	return 0;
}
