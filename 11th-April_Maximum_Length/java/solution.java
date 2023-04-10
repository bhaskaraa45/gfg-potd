/*
  This code is written by Bhaskar
*/

//User function Template for Java

class Solution {
    int solve(int a, int b, int c) {
        // code here
        int mx = Math.max(a , Math.max(b,c));
        int mn = Math.min(a , Math.min(b,c));
        int md = a+b+c - mx - mn;
        
        if(mx > (md+mn+1)*2) return -1;
        return a+b+c;
    }
};
