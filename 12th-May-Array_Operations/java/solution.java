/*
This Code is written by Bhaskar
*/

class Solution {
    static boolean isZeroPresents(int[] arr){
        for(int i=0;i<arr.length;i++){
            if(arr[i]==0) return true;
        }
        return false;
    }
    public static int arrayOperations(int n, int[] arr) {
        // code here
        if(!isZeroPresents(arr)) return -1;
        int cnt=0,temp=0;
        for(int i=0;i<n ;i++){
            if(arr[i]!=0){
                temp++;
            }else{
                if(temp!=0) cnt++;
                temp = 0;
            }
        }
        if(temp!=0) cnt++;
        
        return cnt;
        
    }
}
    
