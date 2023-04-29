/*
  This code is written by Bhaskar
*/

//User function Template for C++

class Solution {
public:
    int func(int n) {
        if(n == 0) return 1;
        else if(n == 1) return 3;
        else if(n == 2) return 5;
        else if(n == 3) return 7;
        else return 9;
    }

    long long findNumber(long long N) {
        if(N <= 5)
            return func((int)(N-1));

        int range = 0;
        long long n = N;
        for(int i = 1; i < 20; i++) {
            long long curr_sum = 5*((long long)pow(5, i)-1)/4;
            long long nxt_sum = 5*((long long)pow(5, i+1)-1)/4;
            if(N > curr_sum && N <= nxt_sum) {
                range = i;
                n = N - curr_sum;
                break;
            }
        }

        long long res = 0;
        long long rem = 0;
        for(int i = range; i > 0; i--) {
            long long factor = pow(10, i);
            long long x = pow(5, i);
            long long y = n/x;
            rem = n % x;
            if(rem == 0) {
                y--;
                rem = x;
            }
            n = rem;
            int f = func((int)y);

            long long temp = factor*f;
            res += temp;
        }

        int f;
        if(rem == 5) f = func((int)rem);
        else f = func((int)(rem-1));

        res += f;
        return res;
    }
};



