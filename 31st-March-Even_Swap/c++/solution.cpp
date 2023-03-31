//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            // Code here
            int index = 0;
            for(int i=0 ; i< n ; i++){
                if(a[i]%2==a[i+1]%2){
                    continue;
                }
                sort(a.begin()+index, a.begin()+ (i+1), greater<int>());
                index=i+1;
            }
            //beacuse if any left
            sort(a.begin()+index, a.begin()+ n , greater<int>());
            return a;
            
            
            
            //method 2
            
    
// 		int check = 1;
// 		while(check==1){
// 		    check=0;
// 		    for(int i=0 ; i<n-1 ; i++){
// 		        if(a[i]%2==a[i+1]%2){
// 		            if(a[i]<a[i+1]){
// 		                check=1;
// 		                int temp = a[i];
// 		                a[i] = a[i+1];
// 		                a[i+1] =temp;
// 		            }
		            
// 		        }
// 		    }
// 		}
// 		return a;
            
        }
};
