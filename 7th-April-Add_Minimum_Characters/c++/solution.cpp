class Solution{   
public:
    int addMinChar(string str){    
        //code here
        		int len = str.length();
		int i = 0 , j= len - 1;
		int cnt = len-1;
		
		while(i < j){
		    if(str[i]==str[j]){
		        i++;
		        j--;
		    }else{
		        i=0;
		        j= (--cnt);
		    }
		}
		return len-cnt-1;
    }
};
