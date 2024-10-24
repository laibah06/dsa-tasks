#include <iostream>
using namespace std;

int main() {
    int array[10]; 
    int size,element,position;  
    const int max_size= 10;
    cout<<"Enter the size of array: ";
    cin>>size;
    if (size>max_size){
        cout<<"invalid size array out of bound.";
        return 1; 
    }
    cout << "Enter the elements of the array: ";
    for (int i=0;i<size;i++) {
        cin>>array[i];
    }
    cout<<"Enter the element to insert: ";
    cin>>element;
    cout<<"Enter the position where to insert element: ";
    cin>>position;
    for(int i=size;i>position;--i) {
        array[i]=array[i-1];
    } 
    array[position]=element;
    size++;
    cout<<"Array after insertion: ";
    for(int i=0; i<size;++i) {
        cout<<array[i]<<endl;
    }
    return 0;
}