// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        // Code here
        int max =0;
        for(int i=0 ; i< N ; i++){
            if(max < arr[i]) {
                max = arr[i];
            }
        }

        int freq[max+1];
        memset(freq , 0 , sizeof(freq));

        for (int i = 0; i < N; i++) {
            freq[arr[i]]++;
        }
         int ans = 0;
        for (int i = 0; i < N; i++) {
            int factors = 0;
            for (int j = 1; j*j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    factors += freq[j];
                    if (j*j != arr[i]) {
                        factors += freq[arr[i]/j];
                    }
                }
            }
            if (factors > 1) {
                ans++;
            }
        }
        return ans;
        
    }
};
