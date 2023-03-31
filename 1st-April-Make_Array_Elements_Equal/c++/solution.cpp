// User function Template for C++

class Solution {
  public:
    long long int minOperations(int N) {
        // Code here
        //We are going to decrease the values of elemnet which greater  than mean value of the array
        //and increase the value of elements which are smaller than mean value
        //and finally every elements of the array will be equal to mean value
 
        long long int meanValue = N;//mean value of a Odd number array is N , bcz sum = N*N and mean = sum/N;
        long long int count=0; //we will store our answer here
        
        N--; //decrease N by 1 , bcz our 1st elemnent is 1 so we have to repeat the operation for N-1 times 
        
        if(N%2==0){ // after decreasing if N is even 
            long i = N/2; // here 'i' is the term number of N (even no.) ; i th term of even number = N 
            count = i*(i+1); //used formula for calculate the sum of first i even numbers
        }
        else{
            long i = (N+1)/2; //i th term of odd number = N 
            count = i*i; //used formula for calculate the sum of first i odd numbers ; formula , sum = i^2
        }
        
        return count;
    }
};
