/*
  This code is written by Bhaskar
*/


class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
    // Your code here
    int maxDeadline = 1;
    for(int i=0; i<n; i++){
        maxDeadline = max(maxDeadline, arr[i].dead);
    }

    sort(arr, arr+n, [](Job a, Job b){ return a.profit > b.profit; });

    int slots[maxDeadline+1];
    memset(slots, -1, sizeof(slots));

    vector<int> ans(2) ; //ans[0]=count , ans[1] = profit
    ans[0] = 0;
    ans[1] = 0;

    for(int i=0; i<n; i++){
        for(int j=arr[i].dead; j>0; j--){
            if(slots[j]==-1){
                slots[j]=1;
                ans[0]++;
                ans[1] += arr[i].profit;
                break;
            }
        }
    }
    return ans;
}
};

