// User function Template for Java

class Solution {
    public int countSpecialNumbers(int N, int arr[]) {
        // Code here
       int max;
        int[] ArrClone = arr.clone();
        Arrays.sort(ArrClone);
        max = ArrClone[N-1];
        int[] freq = new int[max + 1];

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
}
