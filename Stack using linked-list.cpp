#include <iostream>
using namespace std;

struct Node {
    int plateNumber;
    Node* next;
};

class PlateStack {
private:
    Node* top;
    int maxSize;
    int currentSize;

public:
    PlateStack(int size) : maxSize(size), currentSize(0), top(nullptr) {}

    void addPlate(int plateNumber) {
        if (currentSize >= maxSize) {
            cout << "Stack is full! Cannot add more plates." << endl;
            return;
        }
        Node* newNode = new Node();
        newNode->plateNumber = plateNumber;
        newNode->next = top;
        top = newNode;
        currentSize++;
        cout << "Plate " << plateNumber << " added to the stack." << endl;
    }

    void removePlate() {
        if (currentSize == 0) {
            cout << "Stack is empty! Cannot remove plates." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
        currentSize--;
        cout << "Top plate removed from the stack." << endl;
    }

    void checkTop() {
        if (currentSize == 0) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "The plate on top is: " << top->plateNumber << endl;
    }

    ~PlateStack() {
        while (currentSize > 0) {
            removePlate();
        }
    }
};

int main() {
    PlateStack stack(3);
    stack.addPlate(1);
    stack.addPlate(2);
    stack.addPlate(3);
    stack.checkTop();
    stack.addPlate(4);
    stack.removePlate();
    stack.checkTop();

    return 0;
}