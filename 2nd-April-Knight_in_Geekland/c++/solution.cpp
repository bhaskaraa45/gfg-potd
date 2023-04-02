//User function Template for C++

class Solution{
public:

//moves of knight
int dx[8] = {-2,-2,-1,-1,1,1,2,2};
int dy[8] = {1,-1,2,-2,2,-2,1,-1};

//to check a cell is safe or not , i.e cell is available in NxM matrix or not
bool isSafe(int i, int j, int n, int m){
    if(i >=0 && i<n && j>=0 && j< m) return true;
    return false;
}

    int knightInGeekland(int start_x,int start_y,vector<vector<int>> &arr){
    int n = arr.size(), m=arr[0].size();
    bool visited[n][m];
    memset(visited, false, sizeof(visited));
    visited[start_x][start_y] = true;

    queue<pair<int,int>> q; //for store visited cell cordinate
    q.push({start_x,start_y});

    vector<int> list; //store points
    int point = 0;

    while(!q.empty()){
        int size = q.size();
        point=0;

        for(int i=0 ; i< size ; i++){
            auto temp = q.front();
            q.pop();
            int x = temp.first, y = temp.second;
            point += arr[x][y];

            for(int j=0 ; j<8; j++){
                int xi = x + dx[j];
                int yi = y + dy[j];

                if(isSafe(xi,yi,n,m) && !visited[xi][yi]){
                    visited[xi][yi] = true;
                    q.push({xi,yi});
                }
            }
        }
        list.push_back(point);
    }

    for(int i= list.size()-1 ; i>=0 ; i--){
        if(list[i]+i < list.size()){
            list[i] += list[i+list[i]];
        }
    }

    int max = -10 , ans = -10;

    for(int i =0 ; i < list.size();i++){
        if(list[i]>max){
            max =list[i];
            ans = i;
        }
    }

    return ans;
}
};
