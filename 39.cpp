#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum stack size

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; // Stack is empty at start
    }

    // Push function
    void push() {
        if (top == MAX_SIZE - 1) {
            cout << "Stack Overflow! Cannot push element." << endl;
            return;
        }

        int value;
        cout << "Enter value to push: ";
        cin >> value;

        top = top + 1;         // first increment top
        arr[top] = value;      // then insert element
        cout << value << " pushed to stack." << endl;
    }

    // Pop function
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop element." << endl;
            return;
        }

        int value = arr[top];  // get the top element
        top = top - 1;         // then decrement top
        cout << value << " popped from stack." << endl;
    }

    // Display function
    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    int choice;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: s.push(); break;
            case 2: s.pop(); break;
            case 3: s.display(); break;
            case 4: cout << "Exiting..." << endl; return 0;
            default: cout << "Invalid choice!" << endl;
        }
    }
}
