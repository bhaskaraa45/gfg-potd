/*
This Code is written by Bhaskar
*/

class Solution{
public:
    int isPossible(int n, int m, string s){
        // code here
        int i=0 , j=0; //lets assume
        int extR = 0 ,extL=0 , extT=0,extB=0;
        for(int ind=0;ind<s.length();ind++){
            char ch = s[ind];
            switch (ch){
                case 'L' :  j--;
                            extL = min(extL,j);
                    break;
                case 'R' :  j++;
                            extR = max(extR,j);
                    break;
                case 'D' :  i--;
                            extB = min(extB,i);
                    break;
                case 'U' :  i++;
                            extT = max(extT,i);
                    break;
            }

        }
        int lenH = abs(extR) + abs(extL);
        int lenV = abs(extT) + abs(extB);
        
        if(lenH < m && lenV <n) return 1;
        return 0;
    }
};
