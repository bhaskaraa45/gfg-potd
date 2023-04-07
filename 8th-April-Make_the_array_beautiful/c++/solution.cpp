
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        vector<int> list;
        list.push_back(arr[0]);
    
    for(int i = 1; i < arr.size(); i++) {
        if(list.empty()){
            list.push_back(arr[i]);
        } 
        else{
            if(list.back() >= 0 && arr[i] >= 0) {
                list.push_back(arr[i]);
            } 
            else if(list.back() < 0 && arr[i] < 0) {
                list.push_back(arr[i]);
            } 
            else {
                list.pop_back();
            }
        }
    }
    
    return list;

    }
};
