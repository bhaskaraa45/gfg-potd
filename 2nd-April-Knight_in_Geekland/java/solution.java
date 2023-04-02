//User function Template for Java

class Solution{
    
    //moves of knight
    static int[] dx = {-2,-2,-1,-1,1,1,2,2};
    static int[] dy = {1,-1,2,-2,2,-2,1,-1};
    
    //to check a cell is safe or not , i.e cell is available in NxM matrix or not
    static boolean isSafe(int i, int j , int n, int m){
        if(i >=0 && i<n && j>=0 && j< m) return true;
        return false;
    }
    
    
    public int knightInGeekland(int arr[][], int start_x, int start_y){
        // Code Here.
        int n = arr.length , m = arr[0].length;
        boolean visited[][] = new boolean[n][m];
        visited[start_x][start_y] = true;
        
        Queue<int[]> qu = new LinkedList<>(); //for store visited cell cordinate
        qu.add(new int[]{start_x,start_y});
        
        ArrayList<Integer> list = new ArrayList<>(); //to store the points
        int point = 0;
        
        while(! qu.isEmpty()){
            int size = qu.size();
            point=0;
            
            for(int i=0 ; i< size ; i++){
                int temp[] = qu.poll();
                int x = temp[0],y = temp [1];
                point += arr[x][y];
                
                for(int j=0 ; j<8; j++){
                    int xi = x + dx[j];
                    int yi = y + dy[j];
                    
                    if(isSafe(xi,yi,n,m) && !visited[xi][yi]){
                        visited[xi][yi] = true;
                        qu.add(new int[]{xi,yi});
                    }
                }
                
            }
            list.add(point); 
        }
        
        for(int i= list.size()-1 ; i>=0 ; i--){
            if(list.get(i)+i < list.size()){
                list.set(i , list.get(i)+list.get(i+list.get(i)));
            }
        }
        
        int max = -10 , ans = -10;
        
        for(int i =0 ; i < list.size();i++){
            if(list.get(i)>max){
                max =list.get(i);
                ans = i;
            }
        }
        
        
        
        return ans;
    }
}  
