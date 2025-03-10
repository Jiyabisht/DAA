// Given an already sorted array of positive integers, design an algorithm and 
// implement it using a program to find whether a given key element is present in the 
// array or not. Also, find the total number of comparisons for each input case. (Time 
// Complexity = O(log2n), where n is the size of input).  BINARY SEARCH.


// (ITERATIVE METHOD)
#include<iostream>
using namespace std;
int binarysearchiterative(int arr[],int n,int key,int &c){
    int start=0,end=n-1,mid;
    while(start<=end){
        c++;
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key,c=0;
    cout<<"enter key to find : "<<endl;
    cin>>key;
    int result=binarysearchiterative(arr,n,key,c);
    if(result !=-1){
        cout<<"element is present at index "<<result<<"and no. of comparisions = "<<c;
    }else{
        cout<<"element not present and no. of comparisions are "<<c;
    }
}


// (RECURSIVE METHOD)
#include<iostream>
using namespace std;
int binarysearchrecursive(int arr[],int key,int &c,int start,int end){
    if(start<=end){
        c++;
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            return binarysearchrecursive(arr,key,c,mid+1,end);
        }else{
            return binarysearchrecursive(arr,key,c,start,mid-1);
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key,c=0;
    cout<<"enter key to find : "<<endl;
    cin>>key;
    int result=binarysearchrecursive(arr,key,c,0,n-1);
    if(result !=-1){
        cout<<"element is present at index "<<result<<"and no. of comparisions = "<<c;
    }else{
        cout<<"element not present and no. of comparisions are "<<c;
    }
}
