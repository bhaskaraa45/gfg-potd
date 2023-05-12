/*
This Code is written by Bhaskar
*/


class Solution {
    public static int bitMagic(int n, int[] arr) {
        // code here
        int start =0 , end = n-1 ,cnt=0;
        
        while(start<=end){
            if(arr[start]!=arr[end]){
                cnt++;
            }
            start++;
            end--;
        }
        
        if(cnt%2==0) return cnt/2;
        else return cnt/2 +1;
    }
}
