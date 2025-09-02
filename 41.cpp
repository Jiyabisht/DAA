#include <iostream>
#include<queue>
using namespace std;
const int max=5;
queue<int>q1,q2;
void Push(){
    if(q1.size()==max){
        cout<<"stack is full";
        return;
    }
    int value;
    cout<<"enter value ";
    cin>>value;
    
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(value);
    
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
}
void Pop(){
    if(q1.empty()){
        cout<<"stack empty ";
        return;
    }
    int value=q1.front();
    q1.pop();
    cout<<"element poped is "<<value;
}
void Display(){
    if (q1.empty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack elements (top to bottom): ";
    queue<int>temp=q1;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
}
int main()
{
    int choice;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: Push(); break;
            case 2: Pop(); break;
            case 3: Display(); break;
            case 4: cout << "Exiting..." << endl; return 0;
            default: cout << "INVALID CHOICE" << endl;
        }
    }
    return 0;
}
