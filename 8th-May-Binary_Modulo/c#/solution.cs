/*
This Code is written by Bhaskar
*/

public class Solution
{
    public int Modulo(string s, int m)
    {
        int k = 0;

        // Convert the binary string to an integer
        for (int i = 0; i < s.Length; i++)
        {
            k = ((k << 1) % m + (s[i] - '0') % m) % m;
        }

        return k;
    }
}


