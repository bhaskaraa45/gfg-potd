/*
  This code is written by Bhaskar
*/

class Solution {
    public static int dominantPairs(int n, int[] arr) {
        // code here

        Arrays.sort(arr,0,n/2);
        Arrays.sort(arr,n/2,n);
        
        int cnt = 0;
        int i=n/2-1, j = n-1;
        
        while(i>=0 && j >=n/2){
            
            if(arr[i] >= 5*arr[j]){
                //if this condition satisfies then for 
                //that i every elemnet after n/2 to j will be dominant pair
                cnt += (j-n/2+1);
                i--;
            }
            else j--;
        }
        return cnt;
    }
  
}
