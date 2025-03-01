//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
       long long n = arr.size() + 1;  // The actual range should be 1 to n
        long long total_sum = (n * (n + 1)) / 2;  // Use long long to prevent overflow
        long long actual_sum = accumulate(arr.begin(), arr.end(), 0LL);  // Ensure long long sum
        return total_sum - actual_sum;  // The missing number
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends