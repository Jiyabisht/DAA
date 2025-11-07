class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int depth = 0;
        vector<int> result;
        char ch;
        for (int i=0;i<seq.length();i++) {
            ch=seq[i];
            if (ch == '(') {
                depth++;
                result.push_back(depth % 2);
            } else if (ch == ')') {
                result.push_back(depth % 2);
                depth--;
            }
        }
        
        return result;
    }
};



//Full code
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * @brief Partitions a Valid Parentheses String (VPS) into two VPSs (0 and 1)
     * while minimizing the maximum nesting depth of the resulting strings.
     * * The method assigns parentheses based on the parity (odd/even) of the current depth.
     * * @param seq The input Valid Parentheses String.
     * @return A vector<int> where each element is 0 or 1, indicating the assigned group.
     */
    vector<int> maxDepthAfterSplit(string seq) {
        // The running depth (nesting level)
        int depth = 0;
        
        // The result vector to store 0s and 1s
        vector<int> result;
        result.reserve(seq.length()); // Optimize memory allocation
        
        for (char ch : seq) {
            if (ch == '(') {
                // 1. Increment depth (we are entering a new level)
                depth++;
                
                // 2. Assign the current parenthesis based on the NEW depth's parity.
                // This alternates the assignment group for increasing depths.
                result.push_back(depth % 2);
            } else if (ch == ')') {
                // 1. Assign the current parenthesis based on the CURRENT depth's parity.
                result.push_back(depth % 2);
                
                // 2. Decrement depth (we are exiting the level)
                depth--;
            }
        }
        
        return result;
    }
};

// The main function now handles all output formatting directly.
int main() {
    Solution sol;
    cout << "--- Maximum Nesting Depth Partition ---\n" << endl;

    // Helper lambda to print the result inline
    auto execute_and_print = [&](const string& seq) {
        vector<int> result = sol.maxDepthAfterSplit(seq);
        cout << "Input:  \"" << seq << "\"" << endl;
        cout << "Output: [";
        for (size_t i = 0; i < result.size(); ++i) {
            cout << result[i] << (i < result.size() - 1 ? "," : "");
        }
        cout << "]" << endl;
    };

    // Example 1: Input: "(()())"
    execute_and_print("(()())");
    
    cout << "---------------------------------------" << endl;

    // Example 2: Input: "()(())()"
    execute_and_print("()(())()");
    
    return 0;
}
