#include <iostream>
using namespace std;

// Maximum stack size
const int MAX_SIZE = 100;

// Push function
void push(int arr[], int &top) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack Overflow! Cannot push element." << endl;
        return;
    }

    int value;
    cout << "Enter value to push: ";
    cin >> value;

    top = top + 1;
    arr[top] = value;
    cout << value << " pushed to stack." << endl;
}

// Pop function
void pop(int arr[], int &top) {
    if (top == -1) {
        cout << "Stack Underflow! Cannot pop element." << endl;
        return;
    }

    int value = arr[top];
    top = top - 1;
    cout << value << " popped from stack." << endl;
}

// Display function
void display(const int arr[], int top) {
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

int main() {
    int stack_array[MAX_SIZE];
    int top = -1;
    int choice;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                push(stack_array, top);
                break;
            case 2:
                pop(stack_array, top);
                break;
            case 3:
                display(stack_array, top);
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
}
