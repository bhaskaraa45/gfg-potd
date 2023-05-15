/*
This Code is written by Bhaskar
*/

class Solution {
     public static long countBits(long n) {
        // code here
        if(n==2) return 2;
        if(n==1) return 1;
        if(n==0) return 0;
        double temp = Math.log10(n)/Math.log10(2);
        int p = (int) temp;
        long ans = (long) (Math.pow(2,p-1)*p + (n+1 - Math.pow(2,p)));

        return ans + countBits((long)(n-Math.pow(2,p)));

    }
}
        
