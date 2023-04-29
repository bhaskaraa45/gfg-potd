/*
  This code is written by Bhaskar
*/

#User function Template for python3

class Solution:
    def func(n):
        if n == 0:
            return 1
        elif n == 1:
            return 3
        elif n == 2:
            return 5
        elif n == 3:
            return 7
        else:
            return 9

    def findNumber(self, N : int) -> int:
        if N <= 5:
            return Solution.func(N - 1)

        range_val = 0
        n = N
        for i in range(1, 20):
            curr_sum = 5 * ((5 ** i) - 1) // 4
            nxt_sum = 5 * ((5 ** (i + 1)) - 1) // 4
            if N > curr_sum and N <= nxt_sum:
                range_val = i
                n = N - curr_sum
                break

        res = 0
        rem = 0
        for i in range(range_val, 0, -1):
            factor = 10 ** i
            x = 5 ** i
            y = n // x
            rem = n % x
            if rem == 0:
                y -= 1
                rem = x
            n = rem
            f = Solution.func(y)

            temp = factor * f
            res += temp

        if rem == 5:
            f = Solution.func(rem)
        else:
            f = Solution.func(rem - 1)

        res += f

        return res



