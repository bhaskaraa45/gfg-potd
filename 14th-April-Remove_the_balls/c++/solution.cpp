/*
  This code is written by Bhaskar
*/

class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        vector<int> col;
        vector<int> rad;

        col.push_back(color[0]);
        rad.push_back(radius[0]);

        for (int i = 1; i < N; i++) {
            if (!col.empty() && !rad.empty() && (color[i] == col.back()) && (radius[i] == rad.back())) {
                col.pop_back();
                rad.pop_back();
            } else {
                col.push_back(color[i]);
                rad.push_back(radius[i]);
            }
        }

        return col.size();
    }
};
