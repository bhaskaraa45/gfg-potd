/*
  This code is written by Bhaskar
*/



class Solution {
    public static boolean is_possible_to_get_seats(int n, int m, int[] seats) {
        // code here
       int cnt = 0;
        for (int i = 0; i<m; i++) {
            int pre;
            if(i==0) pre=0;
            else pre=seats[i-1];

            int next;
            if(i==m-1) next=0;
            else next=seats[i+1];
            
            if (pre+next+seats[i]==0) {
                cnt++;
                i++;
            } 
        }
        return cnt>=n ? true : false;
    }
}                         
            
            
