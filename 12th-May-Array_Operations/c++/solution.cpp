/*
This Code is written by Bhaskar
*/


class Solution {
  public:
  bool isZeroPresents(vector<int> &arr, int n){
        for(int i=0;i<n;i++){
            if(arr[i]==0) return true;
        }
        return false;
    }
    int arrayOperations(int n, vector<int> &arr) {
        // code here
      if(! isZeroPresents(arr,n)) return -1;
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
