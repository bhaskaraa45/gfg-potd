class Solution {
    public static int minimumInteger(int N, int[] A) {
        // code here
        long sum =0;
        //for calculating sum of the array
        for(int i=0 ; i< N ; i++){
            sum += A[i];
        }
        //sorting the array in increasing order
        Arrays.sort(A);
        
        //calculating the answer
        for(int i= 0 ; i< N;i++){
            if(sum <= (long)A[i]*N){
                return A[i];
            }
        }
        
        return -1;
    }
}
