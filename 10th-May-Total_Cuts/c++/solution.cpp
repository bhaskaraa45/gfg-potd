/*
This Code is written by Bhaskar
*/
class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        vector<int> mx=A;
        for(int i=1;i<N;i++){
            mx[i]=max(mx[i],mx[i-1]);
        }
        int mn=1e9,ans=0;
        for(int i=N-2;i>=0;i--){
            mn=min(mn,A[i+1]);
            if(mx[i]+mn>=K) ans++;
        }
        return ans;
    }
};

