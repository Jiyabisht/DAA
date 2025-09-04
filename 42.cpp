#include <iostream>
#include<stack>
using namespace std;
const int Max=5;
stack<int>s1,s2;
void Enqueue(){
    if(s1.size()==Max){
        cout<<"overflow";
        return;
    }
    int value;
    cout<<"enter value : ";
    cin>>value;
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(value);
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
}
void Dequeue(){
    if(s1.empty() && s2.empty()){
        cout<<"queue empty ";
        return;
    }
    int value=s1.top();
    cout<<"dequeued element is "<<value;
    s1.pop();
}
void Display(){
    if(s1.empty() && s2.empty()){
        cout<<"queue empty ";
        return;
    }
    stack<int>temp=s1;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}
int main() {
    int choice;

    while (true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: Enqueue(); break;
            case 2: Dequeue(); break;
            case 3: Display(); break;
            case 4: cout << "Exiting..." << endl; return 0;
            default: cout << "INVALID CHOICE" << endl;
        }
    }
    return 0;
}
