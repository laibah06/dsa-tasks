#include<iostream>
using namespace std;
int main() {
    int array[10],n,i,x;
   const int max_size=10;
	cout<<"Enter size of array: ";
    cin>>n;
    if (n>max_size){
        cout<<"size exceeds array out of bound."<<endl;
        return 1; 
    }
    cout<<"enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"enter the element to add at end: ";
    cin>>x;
    array[i]=x;
    n++;
    cout<<"array elements are: ";
    for(i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
}