#include<iostream>
using namespace std;


int*get_array(int m[], int capacity){
	for(int i=0; i<capacity; i++){
		cout<<"Enter a["<<i<<"] = ";
		cin>>m[i];
	}
	return m;
}


int*reverse_array(int m[], int capacity){
	int start = 0;
	int end = capacity - 1;
	int temp;
	
	for(int i=0; i<(capacity/2); i++){
		temp = m[start] ;
		m[start] = m[end];
		m[end] = temp;
		start++;
		end--;
	}
	return m;
}


int main(){
	int *a, size, i;
	cout<<"Enter the size of the array: \t";
	cin>>size;
	a = new int[size];              //size allocation
	a = get_array(a, size);        // calling function to get the elements of the array
	a = reverse_array(a, size);     // getiing the reversed array
	for(i=0; i<size; i++){
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
	return 0;
}
