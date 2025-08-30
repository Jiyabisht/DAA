#include <iostream>
using namespace std;
const int MAX=5;
void Push(int stack[],int &top){
    if(top==MAX-1){
        cout<<"stack is full"<<endl;
        return;
    } 
    int value;
    cout<<"enter value : ";
    cin>>value;
    if(top==-1){
        top=0;
    }else{
        top++;
    }
    stack[top]=value;
}
void Pop(int stack[],int &top){
    if(top==-1){
        cout<<"stack is empty "<<endl;
        return;
    }
    int value=stack[top];
    top--;
    cout<<"element poped is "<<value<<endl;
}
void Display(int stack[],int top){
    if(top==-1){
        cout<<"stack is empty "<<endl;
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
}
int main() {
    int arr[MAX];
    int top=-1;
    int choice;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                Push(arr, top);
                break;
            case 2:
                Pop(arr, top);
                break;
            case 3:
                Display(arr, top);
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "INVALID CHOICE" << endl;
        }
    }
    return 0;
}
