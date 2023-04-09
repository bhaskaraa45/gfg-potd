/*
  This Code is Written by Bhaskar
*/



// User function Template for C++

class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int N) {
        //code here
        int start_values[N];
        int end_values[N];
    
        for(int i = 0 ; i < N ; i++){
            start_values[i] = lines[i][0];
            end_values[i] = lines[i][1];
        }
    
        sort(start_values, start_values + N);
        sort(end_values, end_values + N);
    
        queue<int> qu;
        int ans = 0;
    
        for(int i = 0 ; i < N ; i++){
            qu.push(end_values[i]);
        
        if(!qu.empty() && qu.front() < start_values[i]){
            qu.pop();
        }
        
        ans = max(ans, (int)qu.size());
    }
    
    return ans;
}
};

