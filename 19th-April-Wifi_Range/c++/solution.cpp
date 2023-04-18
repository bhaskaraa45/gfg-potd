/*
  This code is written by Bhaskar
*/

//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
        bool check[N];
        memset(check, false, sizeof(check));

        for(int i=0 ; i < N ; i++){
            if(S[i] == '1'){
                memset(check + i, true, min(X + 1, N - i) * sizeof(bool));
                memset(check + max(i - X, 0) , true, X* sizeof(bool));
            }
        }

        for(bool x : check){
            if(!x){
                return false;
            }
        }
        return true;
    }
};
