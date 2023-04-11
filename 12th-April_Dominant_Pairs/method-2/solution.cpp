/*
  This code is written by Bhaskar
*/

//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        //code here
        //sorting
        sort(arr.begin(),arr.begin()+n/2);
        sort(arr.begin()+n/2, arr.end());
        
        int cnt = 0;
        int i=n/2-1, j = n-1;
        
        while(i>=0 && j >=n/2){
            
            if(arr[i] >= 5*arr[j]){
                //if this condition satisfies then for 
                //that i every elemnet after n/2 to j will be dominant pair
                cnt += (j-n/2+1);
                i--;
            }
            else j--;
        }
        return cnt;
    }  
};
