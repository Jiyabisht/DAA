#include<iostream>
#include <cmath>
using namespace std;
int jumpsearch(int arr[], int key, int &c, int n) {
    int step = sqrt(n);
    int low = 0, high = step;

    while (low < n) {  
        c++;
        if (arr[low] == key)
            return low;
        if (high < n && arr[high] == key)
            return high;

        if (arr[low] < key && (high >= n || arr[high] > key)) {
            for (int i = low + 1; i < high && i < n; i++) {
                c++;
                if (arr[i] == key)
                    return i;
            }
        }

        low = high;
        high += step;
    }

    return -1;
}
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
    int result=jumpsearch(arr,key,c,n);
    if(result !=-1){
        cout<<"element is present at index "<<result<<"and no. of comparisions = "<<c;
    }else{
        cout<<"element not present and no. of comparisions are "<<c;
    }
}
