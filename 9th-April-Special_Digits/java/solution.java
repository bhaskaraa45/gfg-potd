class Solution {
    static int mod =(int) 1e9 + 7;
    static int N = (int) 1e5+5;
    long [] fact;
	long [] invfact;
	
	long binpow(long a,long b,long p){
	    if(b == 0)
	    	return 1;
	    long t = binpow(a,b/2,p);
	    if(b%2 != 0)
	    	return (((a*t)%p)*t)%p;
	    else 
	    	return ((t*t)%p);
	}
	 

	void function1(){
	    fact[0] = 1;
	    for(int i = 1;i < N; i++)
	    {
	    	fact[i] = i*fact[i-1]%mod;
	    }
	    invfact[N-1]=binpow(fact[N-1],mod-2,mod);
	    for(int i=N-2;i>=0;i--){
	        invfact[i] = (i+1)*invfact[i+1]%mod;
	    }
	}
	
	long  nCr(int n, int r, long p){
	    return (((fact[n]*invfact[n-r])%p)*invfact[r])%p;
	}
    
    
    int bestNumbers(int n, int a, int b, int c, int d) {
        // code here
        long ans = 0;
        
        fact = new long[N];
        invfact = new long[N];
        function1();
        
        if(a==b){
            long sum = n*a;
            while(sum>0){
                if(sum%10==c || sum%10==d){
                    return 1;
                }
                sum/=10;
            }
            return 0;
        }
        
        
        for(int i=0 ; i <=n ; i++){
            int sum = i*a + (n-i)*b;
            boolean good =  false;
        
            
            while(sum>0){
                if(sum%10 == c || sum%10 == d){
                    good = true;
                    break;
                }
                sum /= 10;
            }
            
            if(good){
                ans += nCr(n, i , mod);
                
                ans %= mod;
            }
        }
        return (int)ans;
    }
}
