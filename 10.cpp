// Given an array of nonnegative integers, design a linear algorithm and implement it 
// using a program to find whether a given key element is present in the array or not. 
// Also, find the total number of comparisons for each input case. (Time Complexity = 
// O(n), where n is the size of input) 
#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter key : ";
    cin>>key;
    int c=0;
    int flag=0;
    for(int i=0;i<n;i++){
        c++;
        if(arr[i]==key){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"not present";
    }else{
        cout<<"present";
    }
    cout<<"comparisons = "<<c;
}
