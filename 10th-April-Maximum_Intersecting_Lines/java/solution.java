/*
  This Code is Written by Bhaskar
*/



// User function Template for Java

class Solution {
    public int maxIntersections(int[][] lines, int N) {
        // Code here
        int[] start_values = new int[N];
        int[] end_values = new int[N];
        
        for(int i=0 ;i< N ; i++){
            start_values[i] = lines[i][0];
            end_values[i] = lines[i][1];
            
        }
        
        Arrays.sort(start_values);
        Arrays.sort(end_values);
        
        Queue<Integer> qu = new LinkedList<Integer>();
        
        int ans=0;
        
        for(int i=0 ; i < N ; i++){
            qu.add(end_values[i]);
            
            if(!qu.isEmpty() && qu.peek() < start_values[i]){
                qu.remove();
            }
            
            ans = Math.max(ans, qu.size());
        }
        
        return ans;
    }
}
