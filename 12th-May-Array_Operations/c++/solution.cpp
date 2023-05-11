/*
This Code is written by Bhaskar
*/

class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
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
};
