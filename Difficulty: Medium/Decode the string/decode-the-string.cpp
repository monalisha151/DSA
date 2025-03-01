//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
        // code here
        stack<int> numStack;      // Stack to store multipliers (k)
        stack<string> strStack;   // Stack to store previous substrings
        string current = "";      // Current substring being built
        int num = 0;              // Current multiplier
        
        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');  // Construct the full number
            } 
            else if (ch == '[') {
                numStack.push(num);  // Push current number to stack
                strStack.push(current);  // Push current string to stack
                num = 0;
                current = "";  // Reset current substring
            } 
            else if (ch == ']') {
                int repeatTimes = numStack.top(); numStack.pop();  // Get the multiplier
                string temp = strStack.top(); strStack.pop();  // Get the previous string
                while (repeatTimes--) temp += current;  // Repeat current substring
                current = temp;  // Update current
            } 
            else {
                current += ch;  // Append character to current substring
            }
        }
        
        return current;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends