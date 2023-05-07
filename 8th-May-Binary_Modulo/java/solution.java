/*
This Code is written by Bhaskar
*/

class Solution{
     int modulo(String s, int m) {
        int k = 0;

        // Convert the binary string to an integer
        for (int i = 0; i < s.length(); i++) {
            k = ((k << 1) % m + (s.charAt(i) - '0') % m) % m;
        }

        return k;
    }
}

