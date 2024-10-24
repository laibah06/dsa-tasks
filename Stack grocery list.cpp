#include <iostream>
using namespace std;
struct Node {
    string item;
    Node* next;
};
class GroceryList {
private:
    Node* head;
public:
    GroceryList() : head(nullptr) {}
    void addItem(const string& item) {
        Node* newNode = new Node();
        newNode->item = item;
        newNode->next = head;
        head = newNode;
        cout << "Item '" << item << "' added to the list." << endl;
    }
    void removeItem(const string& item) {
        Node* current = head;
        Node* previous = nullptr;
        while (current != nullptr) {
            if (current->item == item) {
                if (previous == nullptr) {
                    head = current->next;
                } else {
                    previous->next = current->next;
                }
                delete current;
                cout << "Item '" << item << "' removed from the list." << endl;
                return;
            }
            previous = current;
            current = current->next;
        }
        cout << "Item '" << item << "' not found in the list." << endl;
    }
    void viewItems() {
        if (head == nullptr) {
            cout << "The list is empty." << endl;
            return;
        }
        cout << "Grocery List Items:" << endl;
        Node* current = head;
        while (current != nullptr) {
            cout << "- " << current->item << endl;
            current = current->next;
        }
    }
    ~GroceryList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};
int main() {
    GroceryList list;
    list.addItem("Milk");
    list.addItem("Bread");
    list.addItem("Eggs");
    list.viewItems();
    list.removeItem("Bread");
    list.viewItems();
    list.removeItem("Butter");
    return 0;
}
