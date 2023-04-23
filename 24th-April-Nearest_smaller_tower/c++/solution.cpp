/*
  This code is written by Bhaskar
*/

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        int n = arr.size();
        stack<int> st;
        vector<int> res(n, -1);
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                res[i] = st.top();
            }
            st.push(i);
        }
        st = stack<int>(); // clear stack
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (st.size() > 0 && (res[i] == -1 || abs(st.top() - i) < abs(res[i] - i))) {
                res[i] = st.top();
            } else if (st.size() > 0 && (res[i] == -1 || abs(st.top() - i) == abs(res[i] - i))) {
                if (arr[st.top()] < arr[res[i]]) {
                    res[i] = st.top();
                }
            }
            st.push(i);
        }
        return res;
}
};
