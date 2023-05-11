/*
This Code is written by Bhaskar
*/

class Solution
{
public:
    bool palindromeCheck(string s)
    {
        int lo = 0, hi = s.length() - 1;
        while (lo <= hi)
        {
            if (s[lo] != '?' && s[hi] != '?')
            {
                if (s[lo] != s[hi])
                {
                    return false;
                }
            }
            lo++;
            hi--;
        }
        return true;
    }

    int minimumSum(string sb)
    {
        if (!palindromeCheck(sb))
        {
            return -1;
        }
        int lo = 0, hi = sb.length() - 1;

        while (lo <= hi)
        {
            if (sb[lo] != '?' || sb[hi] != '?')
            {
                if (sb[lo] != '?')
                {
                    sb[hi] = sb[lo];
                }
                else
                {
                    sb[lo] = sb[hi];
                }
            }
            lo++;
            hi--;
        }

        vector<char> list;
        int n = sb.length();
        int x = 0;

        for (int i = 0; i < n / 2; i++)
        {
            if (sb[i] == '?')
            {
                x++;
            }
            else
            {
                if (x == 0)
                {
                    list.push_back(sb[i]);
                    continue;
                }
                else if (i - x - 1 >= 0)
                {
                    char ch = (char)(((int)(sb[i]) + (int)(sb[i - x - 1])) / 2);
                    list.push_back(ch);
                }
                else
                {
                    list.push_back(sb[i]);
                }
                list.push_back(sb[i]);
                x = 0;
            }
        }

        if (n % 2 != 0)
        {
            if (sb[n / 2] != '?')
            {
                list.push_back(sb[n / 2]);
            }
        }
        if (list.size() == 0)
            return 0;
        int ans = 0;
        for (int i = 0; i < list.size() - 1; i++)
        {
            int a = static_cast<int>(list[i]);
            int b = static_cast<int>(list[i + 1]);
            int diff = std::abs(a - b);
            ans += diff;
        }

        ans *= 2;
        return ans;
    }
};
