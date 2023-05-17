
#This Code is written by Bhaskar


class Solution:
    def isPossible(self, n, m, s):
        # code here
        i=0 
        j=0
        extR=0 
        extL=0
        extT=0
        extB=0
        for ind in range (0 , len(s)):
            ch = s[ind]
            if(ch=='L'):
                j = j-1
                extL = min(extL,j)
            elif(ch=='R'):
                j = j+1
                extR = max(extR,j)
            elif(ch=='U'):
                i = i+1
                extT = max(extT,i)
            elif(ch=='D'):
                i = i-1
                extB = min(extB,i)
        Horizontal = abs(extL) + abs(extR)
        Vertical = abs(extT) + abs(extB)
        
        if(Horizontal<m and Vertical<n):
            return 1;
        return 0;

