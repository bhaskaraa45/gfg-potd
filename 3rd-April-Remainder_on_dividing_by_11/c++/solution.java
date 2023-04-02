//User function Template for C++

class Solution
{

public:
    int xmod11(string x)
    {   
	    // code here
	    /*
	     *divisiblity rule of 11 says , (sum of odd places - sum of even places)%11 ==0 then number is divisible by 11 ... 
         *and exactly we used that rule ..  substraction of these two % 11 will be ans if it is greater than or equal to 0 
         *and if less than zero then add just 11
	    */
	    
	    int oddSum = 0 , evenSum = 0;
	    
	    for(int i=0 ; i < x.size() ; i+=2) 
	        evenSum += x[i] - '0';
	    for(int i=1 ; i < x.size() ;i+=2)
	        oddSum += x[i] - '0';
	   
	    return (oddSum-evenSum)%11 >=0 ? (oddSum-evenSum)%11 : (oddSum-evenSum)%11 +11;
	    
    }
};

