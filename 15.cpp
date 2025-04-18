#include <iostream>
using namespace std;

// void merge(int arr[],int low,int mid,int high){
//     int temp[high-low+1];
//     int left=low;
//     int right=mid+1;
//     int k=0;
//     while(left<=mid && right<=high){
//         if(arr[left]<=arr[right]){
//             temp[k]=arr[left];
//             left++;
//         }
//         else{
//             temp[k]=arr[right];
//             right++;
//         }
//         k++;
//     }
//     while(left<=mid){
//         temp[k]=arr[left];
//         left++;
//         k++;
//     }
//     while(right<=high){
//         temp[k]=arr[right];
//         right++;
//         k++;
//     }
//     for(int i=0;i<k;i++){
//         arr[low+i]=temp[i];
//     }
// }
// void mergesort(int arr[],int low,int high){
//     if(low>=high) return;
//     int mid=low+(high-low)/2;
//     mergesort(arr,low,mid);
//     mergesort(arr,mid+1,high);

//     merge(arr,low,mid,high);
// }
int func(int arr[],int low,int high){
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
        j--;
        }
        if (i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int part=func(arr,low,high);
        quicksort(arr,low,part-1);
        quicksort(arr,part+1,high);
    }
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
    // mergesort(arr, 0,n-1);
    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
    }
    return 0;
}
