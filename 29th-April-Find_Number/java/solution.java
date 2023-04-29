/*
  This code is written by Bhaskar
*/

//User function Template for Java
class Solution
{
    static int func(int n){
        if(n==0) return 1;
        else if(n==1) return 3;
        else if(n==2) return 5;
        else if(n==3) return 7;
        else  return 9;
    }
    public static long findNumber(long N)
    {

        if(N<=5)
            return func((int)(N-1));

        int range=0;
        long n=N;
        for(int i=1 ; i <20; i++){
            long CurrSum = 5*((long)Math.pow(5,i)-1)/4;
            long NxtSum = 5*((long)Math.pow(5,(i+1))-1)/4;
            if(N>CurrSum && N<= NxtSum){
                range=i;
                n = N - CurrSum;
                break;
            }
        }

        long res=0;
        long rem=0;
        for(int i = range ; i>0 ; i--){
            long factor = (long)Math.pow(10,i);
            long x = (long)Math.pow(5,i);
            long y = n/x;
            rem = n%x;
            if(rem==0){
                y--;
                rem = x;
            }
            n = rem;
            int f = func((int)y);

            long temp = factor*f;
            res+=temp;
        }
        int f;
        if(rem==5) f = func((int)rem);
        else f = func((int)(rem-1));

        res+=f;


        return res;
    }
}
