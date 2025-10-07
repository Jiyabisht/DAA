//using string

#include<iostream>
#include<stack>
using namespace std;

int maxpara(string str){
    int currentdepth=0;
    int maxdepth=0;
    for(int i=0;i<str.length();i++){
        char  ch= str[i];
        if(ch=='('){
            currentdepth++;
            maxdepth=max(maxdepth,currentdepth);
        }else if(ch==')'){
            currentdepth--;
        }
    }
    return maxdepth;
}

int main(){
    string s;
    cout<<"enter string : ";
    cin>>s;
    cout<<"MAX PARA : "<<maxpara(s);
    return 0;
}


//using stack
