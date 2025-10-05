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




//using stack as a counter to check the parenthesis

#include <iostream>
#include <string>
#include <stack> // Needed for the stack data structure

using namespace std;

string removeOuterParentheses(string s) {
    string result = "";
    stack<char> s_stack; 

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i]; 

        if (ch == '(') {
            if (!s_stack.empty()) {
                result += ch; 
            }
            s_stack.push(ch);
        } else if (ch == ')') {
            s_stack.pop();
            
            if (!s_stack.empty()) {
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
