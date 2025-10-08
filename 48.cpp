class Solution {
public:
    int minAddToMakeValid(string s) {
        int c1=0,c2=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('){
                c1++;
            }else if(ch==')'){
                c1--;
            }
            if(c1==-1){
                c2++;
                c1=0;
            }
        }
        c2=c2+c1;
        return c2;
    }
};
