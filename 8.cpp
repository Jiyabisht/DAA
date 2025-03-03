#include<iostream>
#include<vector>
using namespace std;
vector<int>rotate(vector<int>arr,int d){
    vector<int>temp;
    int n=arr.size();
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }
    for(int i=0;i<n-d;i++){
        arr[i]=arr[i+d];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
    return arr;
}
int main(){
    int d;
    cout<<"enter d: ";
    cin>>d;
    int n;
    cout<<"enter size of vector : ";
    cin>>n;
    vector<int>arr(n);
    cout<<endl<<"enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr=rotate(arr,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
