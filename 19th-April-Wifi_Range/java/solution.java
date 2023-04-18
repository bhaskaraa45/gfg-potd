/*
  This code is written by Bhaskar
*/

//User function Template for Java
class Solution 
{ 
     boolean wifiRange(int N, String S, int X) {
        // code here
        boolean[] check = new boolean[N];
        Arrays.fill(check,false);
        StringBuilder sb = new StringBuilder(S);

        for(int i=0 ; i < N ; i++){
            if(sb.charAt(i)=='1'){
                Arrays.fill(check , i , (Math.min(i+X+1 , N)) , true);
                Arrays.fill(check ,(Math.max((i - X), 0)) , i+1 , true );
            }
        }

        for(boolean x : check){
            if(!x){
                return false;
            }
        }
        return true;
    }
} 
