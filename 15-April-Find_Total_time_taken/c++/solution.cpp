/*
  This code is written by Bhaskar
*/

class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        // code here
        unordered_set<int> list;
        int t = -1;
        int prevT = 0;
        for (int i = 0; i < n; i++) {
            int curr = 1;
            if (list.find(arr[i]) == list.end()) {
                list.insert(arr[i]);
            }
            else {
                curr = time[arr[i]-1];
            }
            t += curr;
        }
        return t;
    }
};
