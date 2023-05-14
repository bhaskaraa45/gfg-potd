/*
This Code is written by Bhaskar
*/

class Solution{
public static long findMaxSubsetSum(int n, int[] arr)
{
    long[][] nk_dp = new long[n+1][2];
    nk_dp[0][0] = 0;
    nk_dp[0][1] = 0;

    for (int i = 1; i <= n; i++)
    {
      nk_dp[i][0] = nk_dp[i-1][1];
      nk_dp[i][1] = Math.max(nk_dp[i-1][0] + arr[i-1], nk_dp[i-1][1] + arr[i-1]);
    }

    return Math.max(nk_dp[n][0], nk_dp[n][1]);
}
}
