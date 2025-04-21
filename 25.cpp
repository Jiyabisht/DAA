#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter  n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int no;
    cout<<"enter no. to count : ";
    cin>>no;
    cout<<hash[no];
}
