/*
  This code is written by Bhaskar
*/

//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
         //code here
        int cnt=0;
        sort(arr.begin(), arr.begin()+(n/2));
        sort(arr.begin()+(n/2), arr.end());
        
        int j=n/2;
        for(int i=0 ; i< n/2 ; i++){
            while(j<n && arr[i]>=arr[j]*5){
                j++;
            }
            cnt += j-n/2;
        }
        return cnt;
    }
};
