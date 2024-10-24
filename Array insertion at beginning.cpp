#include<iostream>
using namespace std;
int main(){
	int array[10],n,x;
	const int max_size=10;
	cout<<"Enter size of array: ";
    cin>>n;
    if (n>max_size){
        cout<<"size exceeds,array out of bound."<<endl;
        return 1; 
    }
    cout<<"enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
	cout<<"enter the elements in beginning: ";
	cin>>x;
	for(int i=n;i>0;i--){
		array [i] = array [i-1];
	}
	array[0]=x;
	n++;
	cout<<"array elements are: ";
	for(int i=0;i<n;i++){
		cout<<array[i]<<endl;
	}
}