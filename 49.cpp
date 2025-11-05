class Solution {
public:
    string minRemoveToMakeValid(string s) {
        unordered_set<int>extra;
        stack<int>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }else if (s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }else{
                    extra.insert(i);
                }
            }
        }
        while(!st.empty()){
        extra.insert(st.top());
        st.pop();
        }
        string str="";
        for(int i=0;i<s.length();i++){
            if(!extra.contains(i)){
                str.push_back(s[i]);
                //str=str+s[i]; causing memory limit exceeding
            }
        }
        return str;
    }
};
