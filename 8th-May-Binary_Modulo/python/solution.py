
#This Code is written by Bhaskar


class Solution:
    def modulo(self, s, m):
        k = 0

        # Convert the binary string to an integer
        for i in range(len(s)):
            k = ((k << 1) % m + (ord(s[i]) - ord('0')) % m) % m

        return k

