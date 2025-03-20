#include <iostream>
#include<vector>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	int num;
	cin >> num;
	string str=to_string(num);
	bool flag=false;
	for(int i=0;i<str.length()-1;i++){
		if(str[i]=='2'&& str[i+1]=='1'){
			flag=true;
			break;
		}
	}
	if(num%21==0 ){
		cout<<"The streak is broken!"<<endl;
	}else if(flag){
		cout<<endl<<"The streak is broken!"<<endl;
	}else{
		cout<<"The streak lives still in our heart!";
	}
	}
	return 0;
}
