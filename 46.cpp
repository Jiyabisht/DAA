#include <iostream>
#include <string>

using namespace std;
string removeOuterParentheses(string s) {
    string result = "";
    int count = 0; 
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i]; 
        if (ch == '(') {
            if (count > 0) {
                result += ch; 
            }
            count++;
        } else if (ch == ')') {
            count--;
            if (count > 0) {
                result += ch; 
            }
        }
    }
    
    return result;
}

int main() {
    string user_input;
    cout << "Enter a Valid Parentheses String (e.g., (()())(())): ";
    cin >> user_input; 
    
    string output = removeOuterParentheses(user_input);
    
    cout << "\nOriginal String: " << user_input << endl;
    cout << "Result String:   " << output << endl;

    return 0;
}
