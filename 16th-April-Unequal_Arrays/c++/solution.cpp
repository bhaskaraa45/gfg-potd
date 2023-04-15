/*
  This code is written by Bhaskar
*/


class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
        int sumOfA = 0, sumOfB = 0;
        int evenA = 0, oddA = 0, evenB = 0, oddB = 0;
        vector<int> even_A, odd_A, even_B, odd_B;

        for (int i = 0; i < N; i++) {
            sumOfA += A[i];
            sumOfB += B[i];
            if (A[i] % 2 == 0) {
                evenA++;
                even_A.push_back(A[i]);
            }
            else {
                oddA++;
                odd_A.push_back(A[i]);
            }

            if (B[i] % 2 == 0) {
                evenB++;
                even_B.push_back(B[i]);
            }
            else {
                oddB++;
                odd_B.push_back(B[i]);
            }
        }

        if (sumOfA != sumOfB) return -1;

        if (evenA != evenB || oddA != oddB) return -1;

        sort(even_A.begin(), even_A.end());
        sort(odd_A.begin(), odd_A.end());
        sort(even_B.begin(), even_B.end());
        sort(odd_B.begin(), odd_B.end());

        long ans = 0;
        for (int i = 0; i < even_A.size(); i++) {
            int temp = abs(even_A[i] - even_B[i]);
            ans += (temp / 2);
        }

        for (int i = 0; i < odd_A.size(); i++) {
            int temp = abs(odd_A[i] - odd_B[i]);
            ans += (temp / 2);
        }
        return ans / 2;
    }
};

