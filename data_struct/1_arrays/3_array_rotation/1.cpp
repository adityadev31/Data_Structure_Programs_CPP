#include<iostream>                  // rotating array by 2
using namespace std;

int main(){
	int a[7]={1,2,3,4,5,6,7};
	int i, temp, num;
	
	cout<< "enter the number of times the array should rotate: \t";
	cin >> num;
	
	while(num != 0){
		i = 0;
		temp = a[i];
		while(i != 7){
			a[i] = a[i + 1];
			i++;
		}
		a[i - 1] = temp;                    //*** note ***  here (i = 7)
		num--;
	}
	
	i = 0;
	
	while(i != 7){
		cout<<a[i]<<endl;
		i++;
	}
	
	
	return 0;
}
