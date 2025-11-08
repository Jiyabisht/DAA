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
/*
1. The Super Quick Check 
if (n % 2 != 0) return false;
Logic: A valid parenthesis string must have an even number of brackets (equal numbers of ( and )). If the length is odd, it's immediately impossible
Game over.
2. Pass 1: Left to Right (L $\to$ R) - Are there too many )?
    This is the main rule for valid brackets: You can never close a bracket if you haven't opened one first.
    balance: This counts how many opening brackets we have the potential for.
    What increases balance? Anything that could be an opening bracket:
    A fixed '(' (locked[i] == '1')
    A flexible slot '0' (locked[i] == '0')
    (We assume the best case:we use the flexible slot as a '(')
    What decreases balance? Only a fixed ')' (because it must be a closing bracket).
    The Fail Condition (if (balance < 0)): If the balance goes negative, it means we ran into too many fixed ')' 
    that we couldn't match, even using all our potential flexible slots as '(' Instant fail.

3. Pass 2: Right to Left (R $\to$ L) - Are there too many ( ? 
The first pass is awesome, but it can't catch the error where we have too many unmatched ( at the end. 
(E.g., s="(((", locked="111").

So, we scan backward, doing the exact opposite check:
balance: This time, it counts how many closing brackets we have the potential for (reading from the right).
What increases balance? Anything that could be a closing bracket:
A fixed ')'
A flexible slot '0'
What decreases balance? Only a fixed '('.
The Fail Condition (if (balance < 0)): If the balance goes negative, it means we ran into too many fixed '(' 
that we couldn't match, even using all our potential flexible slots as ')' from that point to the end. Instant fail.

If the string passes both these tough checks, the code is smart enough to know that a valid arrangement must exist, and it returns true.
*/
