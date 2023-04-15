/*
  This code is written by Bhaskar
*/


class Solution {
    public static long solve(int N, int[] A, int[] B) {
        // code here
        int sumOfA =0 , sumOfB=0;
        int evenA=0 , oddA=0 , evenB=0, oddB=0;
        ArrayList<Integer> even_A = new ArrayList<>();
        ArrayList<Integer> odd_A = new ArrayList<>(); 
        ArrayList<Integer> even_B = new ArrayList<>();
        ArrayList<Integer> odd_B = new ArrayList<>();        
        
        for(int i=0 ; i < N ; i++){
            sumOfA += A[i];
            sumOfB += B[i];
            if(A[i]%2==0){
                evenA++;
                even_A.add(A[i]);
            }else{
                oddA++;
                odd_A.add(A[i]);
            }
            
            if(B[i]%2==0){
                evenB++;
                even_B.add(B[i]);
            }else{
                oddB++;
                odd_B.add(B[i]);
            }
            
        }
        
        if(sumOfA != sumOfB) return -1;
        
        if(evenA != evenB || oddA!=oddB) return -1;
        
        Collections.sort(even_A);
        Collections.sort(odd_A);
        Collections.sort(even_B);
        Collections.sort(odd_B);
        
        long ans=0;
        for(int i=0 ; i<even_A.size() ; i++){
            int temp = Math.abs(even_A.get(i) - even_B.get(i));
            ans += (temp/2);
        }
        
        for(int i=0 ; i<odd_A.size() ; i++){
            int temp = Math.abs(odd_A.get(i) - odd_B.get(i));
            ans += (temp/2);
        }
        return ans/2;
    }
}
