/*
  This code is written by Bhaskar
*/

//GCD of the Array will be our answer

class Solution{
public:
//     int gcd(int x,int y){
//         if(y==0) return x;
//         return gcd(y , x%y);
//     }
    int minimumNumber(int n,vector<int> &arr){
        // Code here
      int g=0;
        for(int i=0 ; i < n-1 ; i++){
            g = __gcd(g , arr[i]);
        }
        
        return g;
    }
};
