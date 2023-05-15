/*
This Code is written by Bhaskar
*/

class Solution {
  public:
    long long countBits(long long n) {
        // code here
        if(n==2) return 2;
        if(n==1) return 1;
        if(n==0) return 0;
        double temp = log10(n)/log10(2);
        int p = (int) temp;
        long long ans = (long long) (pow(2,p-1)*p + (n+1 -pow(2,p)));

        return ans + countBits((long long)(n-pow(2,p)));
    }
};
        
