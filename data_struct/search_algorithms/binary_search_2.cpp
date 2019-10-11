#include<iostream>
using namespace std;
int size;
int m=0,l=0,r=0;

void binarySearch(int *a, int key, int l=0, int r=size, int m=(size)/2){
	if(l<=r){
		if(key==a[m])
			cout<<"Match found";
		
		else if(key>a[m]){
			l = m+1;
			m = (l+r)/2;
			binarySearch(a, key, l, r, m);	
		}
			
		else{
			r = m-1;
			m = (l+r)/2;
			binarySearch(a, key, l, r, m);
		}
	}
	else
		cout<<"Match not found";
	return;
}


int*getArray(){
	cout<<"Enter size: \t";
	cin>>size;
	int *a;
	a = new int[size];
	for(int i=0; i<size; i++){cin>>a[i];}
	return a;
}


int main(){
	int *a, key;
	a = getArray();
	cout<<endl<<"Enter key: \t";
	cin>>key;
	binarySearch(a, key);
	return 0;
}

