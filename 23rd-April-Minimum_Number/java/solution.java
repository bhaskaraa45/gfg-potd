/*
  This code is written by Bhaskar
*/

//GCD of the Array will be our answer

class Solution {
    static int gcd(int x,int y){
        if(y==0) return x;
        return gcd(y , x%y);
    }
    public static int minimumNumber(int n, int[] arr) {
        // code here
        int g = gcd(arr[0] , arr[1]);
        for(int i=1 ; i < n-1 ; i++){
            g = gcd(g , gcd(arr[i] , arr[i+1]));
        }
        
        return g;
    }
}
