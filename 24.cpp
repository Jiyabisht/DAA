class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n=arr.size();
        int c=0,max=0;;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                c++;
                if(c>max){
                    max=c;
                }
            }else if(arr[i]==0){
                c=0;
            }
        }
        return max;
    }
};
