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
    vector<int>intersectionarr;
   int i=0,j=0;
   while(i<n &&j<m){
    if(arr1[i]==arr2[j]){
        if(intersectionarr.size()==0 || intersectionarr.back()!=arr1[i]){
            intersectionarr.push_back(arr1[i]);
        j++;
        i++;
        }
    }else if(arr1[i]<=arr2[j]){
        i++;
    }else if(arr1[i]>=arr2[j]){
        j++;
    }
    }
    cout << "Intersection: ";
    for(int k = 0; k < intersectionarr.size(); k++){
        cout << intersectionarr[k] << " ";
    }
    cout << endl;
    return 0;
}
