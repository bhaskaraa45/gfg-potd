/*
This Code is written by Bhaskar
*/

class Solution{
    static int isPossible(int n, int m, String s){
        // code here
        int i=0 , j=0; //lets assume
        int extR = 0 ,extL=0 , extT=0,extB=0;
        for(int ind=0;ind<s.length();ind++){
            char ch = s.charAt(ind);
            switch (ch){
                case 'L' :  j--;
                            extL = Math.min(extL,j);
                    break;
                case 'R' :  j++;
                            extR = Math.max(extR,j);
                    break;
                case 'D' :  i--;
                            extB = Math.min(extB,i);
                    break;
                case 'U' :  i++;
                            extT = Math.max(extT,i);
                    break;
            }

        }
        int lenH = Math.abs(extR) + Math.abs(extL);
        int lenV = Math.abs(extT) + Math.abs(extB);
        
        if(lenH < m && lenV <n) return 1;
        return 0;
    }
}
