#include<iostream>
using namespace std;
int main(){
	int array[10],i,n,x;
	cout<<"enter the size of array: ";
	cin>>n;
	cout<<"enter the elements of array: ";
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<"enter a element to search in array: ";
	cin>>x;
	for(i=0;i<n;i++){
		if(array[i] == x){
			cout<<"element found at index: "<<i;
			break;
		}
	}
	if(i==n){
		cout<<"element not found in array.";
	}

}