
class Solution {
 public:
    int equalSum(int N, vector<int> &A) {
        // code here
		if(N==1) return 1;
		
		int sum1 =0;
		for(int i=0 ; i<N ; i++){
		    sum1 += A[i];
		}
		int sum2 =0;
		for(int i =0 ; i <N-1 ; i++){
		    sum2 += A[i];
		    sum1 -= A[i];
		    if(sum2 == (sum1-A[i+1])){
		        return i+2;
		    }
		}
		return -1;
    }
};
