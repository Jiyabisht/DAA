#include <iostream>
#include<vector>
using namespace std;
int main() {
	int num;
	cin >> num;	
	vector<int>arr(num);
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	int sum=0,flag=0,c=0;
	for(int i=0;i<num;i++){
		if(arr[i]<=0){
			flag=1;
			continue;
		}else if(arr[i]>0){
			c++;
			sum=sum + arr[i];
		}
	}
	int min=arr[0];
	if (flag==1 && c==0){
		for(int i=0;i<num;i++){
			if(arr[i]>min){
				min=arr[i];
			}
		}
	}
	if(c==0){
		cout<<min<<" "<<"1";
	}else{
		cout<<sum<<" "<<c;
	}
}
