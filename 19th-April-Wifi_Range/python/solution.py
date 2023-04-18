
#  This code is written by Bhaskar


#User function Template for python3
class Solution:
    def wifiRange(self, N, S, X): 
        #code here
        check = [False] * N

        for i in range(N):
            if S[i] == '1':
                check[i: min(i + X + 1, N)] = [True] * (min(i + X + 1, N) - i)
                check[max(i - X, 0): i + 1] = [True] * (i + 1 - max(i - X, 0))
        return all(check)   
        


