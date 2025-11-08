//My logic-passes 168 out of 260 test cases
class Solution {
public:
    bool canBeValid(string s, string locked) {
        int d=0;
        char ch;
        stack<int>st;
        for(int i=0;i<s.length();i++){
            ch=s[i];
            if(locked[i]==1){
                st.push(ch);
                if(ch=='('){
                    d++;
                }else{
                    d--;
                }
            }else if(locked[i]==0){
                if(d>0){
                    st.push(')');
                    d--;
                }else{
                    st.push('(');
                    d++;
                }
            }
        }
        if(d==0){
            return true;
        }else{
            return false;
        }
    }
};

//correct code
class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.length();
        if (n % 2 != 0) {
            return false;
        }
        int balance = 0;
        for (int i = 0; i < n; ++i) {
            if (locked[i] == '0' || s[i] == '(') {
                balance++;
            } 
            else { 
                balance--;
            }
            if (balance < 0) {
                return false;
            }
        }
        balance = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (locked[i] == '0' || s[i] == ')') {
                balance++;
            }
            else { 
                balance--;
            }
            
            if (balance < 0) {
                return false;
            }
        }
        return true;
    }
};
