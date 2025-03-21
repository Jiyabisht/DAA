#include <iostream>
#include<vector>
using namespace std;
int checkcoin(vector<int> &arr,int n ,int x){
	int start=0,end=n-1,lsum=0,rsum=0;
	for(int i=0;i<n;i++){
		if(arr[i]<x){
			lsum=lsum+arr[i];
		}else if(arr[i]>x){
			rsum=rsum+arr[i];
		}
	}
	if(lsum==rsum){
		return 1;
	}else{
		return 0;
	}
	return 0;
}
int main() {
	int n;
	cin >> n;   
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	int ans=checkcoin(arr,n,x);
	if(ans==1){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
