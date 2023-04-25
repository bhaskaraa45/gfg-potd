/*
  This code is written by Bhaskar
*/


//User function Template for C++
class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
        int cnt = 0;
        
    for (int i = 0; i < m; i++) {
        
        if(i==0){
            if(seats[i]+seats[i+1]==0){
                cnt++;
                seats[i]=1;
            }
        }else if(i==m-1){
            if(seats[i]+seats[i-1]==0){
                cnt++;
                seats[i]=1;
            }
        }else{
            if(seats[i-1]+seats[i]+seats[i+1]==0){
                cnt++;
                seats[i]=1;
            }
        }
        
        if (cnt >= n) return true;
    }
    return false;
}
