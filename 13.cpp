#include <iostream>
using namespace std;

void insertionsort(int arr[],int n){
    int c=0;
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
            c++;
        }
        arr[j+1]=temp;
    }
    cout<< "count is "<<c<<endl;
}
int main() {
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr, n);
    for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
    }
    return 0;
}
