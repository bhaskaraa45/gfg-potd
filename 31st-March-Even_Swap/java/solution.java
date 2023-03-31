//User function Template for Java

class Solution{
	int [] lexicographicallyLargest(int [] arr, int n) {
		//Write your code here
        Integer[] a = new Integer[n];

        for(int i=0 ; i< n ; i++){
            a[i] = arr[i];
        }

        int index = 0;
        
        
        for(int i=0 ; i< n-1 ;i++){
            
            if(a[i]%2==a[i+1]%2){ //both are even or both are odd then do nothing
                continue;
            }
            
            // index =0 , i+1= 5;
            Arrays.sort(a , index , i+1 , Collections.reverseOrder());
            
            index  = i+1;
            
        }
        
        //2 3 4 5 7 8 9
        //index = 5
        
        Arrays.sort(a , index , n , Collections.reverseOrder());
        
        int[] b = new int[n];
        
        for(int i=0 ; i< n ; i++){
            b[i] = a[i];
        }
        
        return b;
	
	
	//METHOD 2
	
	// 		int check = 1;
// 		while(check==1){
// 		    check=0;
// 		    for(int i=0 ; i<n-1 ; i++){
// 		        if(arr[i]%2==arr[i+1]%2){
// 		            if(arr[i]<arr[i+1]){
// 		                check=1;
// 		                int temp = arr[i];
// 		                arr[i] = arr[i+1];
// 		                arr[i+1] =temp;
// 		            }
		            
// 		        }
// 		    }
// 		}
// 		return arr;
}
}
