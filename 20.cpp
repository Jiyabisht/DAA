#include <iostream>
#include<vector>
using namespace std;
bool checkquery(int arr[],int n,int q){
	for(int i=0;i<n;i++){
		if(arr[i]==q){
			return true;
		}
	}
	return false;
}
int main() {
	int n;
	cin>>n;
	int q;
	cin>>q;
	int arr[n];
		for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	while(q--){
		int query;
		cin>>query;
	if(!checkquery(arr,n,query)){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
	}
}
