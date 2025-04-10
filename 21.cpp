#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"enter n and m : ";
    cin>>n>>m;
   vector<int>arr1,arr2;
    cout<<"enter arr1 elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    cout<<"enter arr2 elements : ";
    for(int j=0;j<m;j++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }
    vector<int>unionarr;
   int i=0,j=0;
   while(i<n &&j<m){
    if(arr1[i]<=arr2[j]){
        if(unionarr.size()==0 || unionarr.back()!=arr1[i]){
            unionarr.push_back(arr1[i]);
        }
        i++;
    }else if(arr1[i]>=arr2[j]){
            if(unionarr.size()==0 || unionarr.back()!=arr2[j]){
                unionarr.push_back(arr2[j]);
            }
        j++;
    }
   }
   while(i<n){
    if(unionarr.size()==0 || unionarr.back()!=arr1[i]){
        unionarr.push_back(arr1[i]);
    }
    i++;
    }
    while(j<m){
        if(unionarr.size()==0 || unionarr.back()!=arr2[j]){
            unionarr.push_back(arr2[j]);
        }
    j++;
    }
    cout << "Union: ";
    for(int k = 0; k < unionarr.size(); k++){
        cout << unionarr[k] << " ";
    }
    cout << endl;

    return 0;
}
