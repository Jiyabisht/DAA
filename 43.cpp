#include <iostream>
using namespace std;
const int MAX=8;
void Push1(int stack[],int &top1,int &top2){
    if(top1+1==top2){
        cout<<"stack overflow";
        return;
    }
    int value;
    cout<<"enter value : ";
    cin>>value;
    top1++;
    stack[top1]=value;
}
void Push2(int stack[],int &top1,int &top2){
    if(top2-1==top1){
        cout<<"stack overflow";
        return;
    }
    int value;
    cout<<"enter value : ";
    cin>>value;
    top2--;
    stack[top2]=value;
}
void Pop1(int stack[],int &top1,int &top2){
    if(top1==-1){
        cout<<"Stack 1 empty";
        return;
    }
    int x=stack[top1];
    top1--;
    cout<<"element poped is "<<x;
}
void Pop2(int stack[],int &top1,int &top2){
    if(top2==MAX){
        cout<<"Stack 2 empty";
        return;
    }
    int x=stack[top2];
    top2++;
    cout<<"element poped is "<<x;
}
void Display(int stack[],int top1,int top2){
    cout<<"For stack 1"<<endl;
    for(int i=0;i<=top1;i++){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
    cout<<"for stack 2"<<endl;
    for(int i=MAX-1;i>=top2;i--){
        cout<<stack[i]<<" ";
    }
}
int main() {
    int arr[MAX];
    int top1=-1,top2=MAX;  //max=8[0,1,2,3,4,5,6,7],so MAX - 1 is used
    int choice;

    while (true) {
        cout << "\n1. Push1\n2. Pop1\n3. Display\n4. Exit\n5.Push2\n6.Pop2\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                Push1(arr, top1,top2);
                break;
            case 2:
                Pop1(arr, top1,top2);
                break;
            case 3:
                Display(arr, top1,top2);
                break;
            case 5:
                Push2(arr, top1,top2);
                break;
            case 6:
                Pop2(arr,top1,top2);
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
