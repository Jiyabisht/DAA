#include<iostream>
using namespace std;

const int MAX=5;

void Push(int arr[],int &top){
    if(top==MAX-1){
        cout<<"Stack Overflow";
        return;
    }
    int value;
    cin>>value;
    top=top+1;
    arr[top]=value;
    cout<<value<<" Pushed"<<endl;
}

void Pop(int arr[],int &top){
    if(top==-1){
        cout<<"Stack Empty"<<endl;
        return;
    }
    int value=arr[top];
    top=top-1;
    cout<<value<<" Poped"<<endl;
}

void Display(int arr[],int top){
    if(top==-1){
        cout<<"Stack Empty"<<endl;
        return;
    }
    cout<<"Elements are "<<endl;
    for(int i=top;i>=0;i--){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
//Parameter Passing: In the Display function, the top parameter is passed by value (int top) instead of by reference (int &top). This is because the Display 
//function doesn't modify the stack's state (it only reads it), so there is no need to pass top by reference

int main(){
    int arr[MAX];
    int top=-1;
    int choice;
    while(true){
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ";
        cin>>choice;

        switch(choice){
            case 1: 
                Push(arr,top);
                break;
            case 2: 
                Pop(arr,top);
                break;
            case 3: 
                Display(arr,top);
                break;
            case 4: 
                cout<<"Exiting...";
                return 0;
            default:
            cout<<"INVALID CHOICE"<<endl;
        }
    }
    return 0;
}
