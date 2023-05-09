/*
This Code is written by Bhaskar
*/

class Solution {
    final static int mod = 1000000007;
    static int fib(long n)
    {
        int F[][] = new int[][]{{1,1},{1,0}};
        if (n == 0)
            return 0;
        power(F, n-1);

        return F[0][0]%mod;
    }

    static void multiply(int F[][], int M[][])
    {
        long x =  (((long)F[0][0]*M[0][0])%mod + ((long)F[0][1]*M[1][0])%mod);
        long y =  (((long)F[0][0]*M[0][1])%mod + ((long)F[0][1]*M[1][1])%mod);
        long z =  (((long)F[1][0]*M[0][0])%mod + ((long)F[1][1]*M[1][0])%mod);
        long w =  (((long)F[1][0]*M[0][1])%mod + ((long)F[1][1]*M[1][1])%mod);
        x%=mod;
        y%=mod;
        z%=mod;
        w%=mod;

        F[0][0] = (int)x;
        F[0][1] = (int)y;
        F[1][0] = (int)z;
        F[1][1] = (int)w;
    }

    static void power(int F[][], long n)
    {
        if( n == 0 || n == 1)
            return;
        int M[][] = new int[][]{{1,1},{1,0}};

        power(F, n/2);
        multiply(F, F);

        if (n%2 != 0)
            multiply(F, M);
    }

        static  int countStrings(long N) {

            if (N == 2) return 3;
            if (N == 1) return 2;

            return fib(N+2)%mod;
        }
}


