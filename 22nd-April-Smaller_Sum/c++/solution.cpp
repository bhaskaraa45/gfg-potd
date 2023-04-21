/*
  This code is written by Bhaskar
*/

class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
    vector<int> list(arr);
    sort(list.begin(), list.end()); 

    unordered_map<int, long long> hm;
    long long sum = 0;

    for(int i = 0; i < n; i++) {
        if(!hm.count(list[i])) {
            hm[list[i]] = sum; 
        }
        sum += list[i];
    }

    vector<long long> ans(n);

    for(int i = 0; i < n; i++) {
        ans[i] = hm[arr[i]];
    }

    return ans; 
}
};

