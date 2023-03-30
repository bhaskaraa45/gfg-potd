class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        int count=0;
        for(int i=0 ; i<= S.length()-1 ; i++){
            int c=0 ;
            for(int j=i ; j<= S.length()-1 ; j++){
                char ch = S[j];
                if(ch >= 'a' && ch<= 'z'){
                    c++;
                }else{
                    c--;
                }
                if(c==0){
                    count++;
                }
            }
        }
        return count;
    }
    
};
