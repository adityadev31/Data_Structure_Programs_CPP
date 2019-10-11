#include<iostream>
using namespace std;


int*getdata(int x[], int size){
	for(int i=0; i<size; i++){
		cin>>x[i];
	}
	return x;
}




int*rotate(int x[], int size){
	int num, i, j, t;
	
	cout<<"Enter the no. of rotations you want: \t";
	cin>>num;
	
	for(i=0; i<num; i++){
		t = x[i];
		for(j=1; j<size; j++){
			x[j-1] = x[j];
		}
		x[j-1] = t;
	}
	
	return x;
}




void printdata(int x[], int size){
	int i=0;
	while(i != size){
		cout<<"a["<<i<<"] = "<<x[i]<<endl;
		i++;
	}
}



int main(){
	int *a, size;
	
	cout<<"Enter the size of the array: \t";
	cin>>size;
	
	a = getdata(a,size);
//	a = rotate(a,size);
//	printdata(a,size);
	
	return 0;
}
