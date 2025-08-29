#include <iostream>
using namespace std;
const int MAX = 5;
void Enqueue(int queue[],int &front,int &rear){
    if(rear==MAX-1){
        cout<<"queue is full";
        return;
    }
    int value;
    cout<<"enter value ";
    cin>>value;
    if(front==-1 && rear==-1){
        front=rear=0;   //initial step to move rear
    }else{
        rear++;
    }
    queue[rear]=value;
}
void Dequeue(int queue[],int &front,int &rear){
    int value;
    if(front==-1 && rear==-1){
        cout<<"queue is empty";
        return;
    }else if(front == rear){
        front=rear=-1;   //both equal then only one element in queue which will be dequeued by assigning 0  to both front and rear
    }else{
        value=queue[front];
        front++;      // dequeue usinf front only and push using rear onlt
    }
    cout<<"dequeued element is "<<value<<endl;
}
void Display(int queue[],int front ,int rear){
    if(front==-1 && rear==-1){
        cout<<"queue is empty";
    }else{
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<" ";
        }
    }
}
int main()
{
    int arr[MAX];
    int front=-1,rear=-1;
    int choice;
    while (true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                Enqueue(arr, front, rear);
                break;
            case 2:
                Dequeue(arr, front, rear);
                break;
            case 3:
                Display(arr, front, rear);
                break;
            case 4:
                cout << "Exiting...";
                return 0;
            default:
                cout << "INVALID CHOICE" << endl;
        }
    }
    return 0;
}
