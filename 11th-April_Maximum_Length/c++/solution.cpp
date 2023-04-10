/*
  This code is written by Bhaskar
*/

// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
        int mx = max(a , max(b,c));
        int mn = min(a , min(b,c));
        int md = a+b+c - mx- mn;
        
        if(mx > (md + mn +1)*2) return -1;
        return a+b+c;
    }
};
