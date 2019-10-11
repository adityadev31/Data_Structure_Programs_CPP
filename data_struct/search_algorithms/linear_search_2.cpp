// linear data structure

#include<iostream>
using namespace std;


void linearSearch(int *a, int size, int key){
	int i=0, flag=0;
	while(i!=size){
		if(key==a[i]){
			flag++;
			break;
		}
		i++;
	}
	if(flag==0)
		cout<<"not found";
	else
		cout<<"match found";
}



int*getArray(int size){
	int *a;
	a = new int[size];
	for(int i=0; i<size; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	return a;
}



int main(){
	int *arr, size;
	cout<<"Enter the size: \t";
	cin>>size;
	arr = getArray(size);
	linearSearch(arr, size, 5);
	return 0;
}

