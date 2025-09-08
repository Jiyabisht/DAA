#include <iostream>
#include <stack>
using namespace std;

bool is_valid(string str){
    stack<char>sta;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            sta.push(ch);
        }else if(str[i]==')' || str[i]=='}' || str[i]==']'){
            if(sta.empty()) return false;
            else if((sta.top()=='(' && str[i]==')')||
                    (sta.top()=='{' && str[i]=='}') ||
                    (sta.top()=='[' && str[i]==']')){
                        sta.pop();
            }else{         //no match
                return false;
            }
        }
    }
    return sta.empty();
}
int main()
{
    string expr;
    cout << "Enter expression: ";
    cin >> expr;

    if (is_valid(expr))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";

    return 0;
}
