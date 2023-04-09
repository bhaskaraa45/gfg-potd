

const int N = 1e5+5;
const int mod = 1e9+7;
long long fact[N],invfact[N];

long long binpow(long long a,long long b,long long p){
    if(b==0)return 1;
    long long t=binpow(a,b/2,p);
    if(b%2)return (((a*t)%p)*t)%p;
    else return ((t*t)%p);
}
 

void function1(){
    fact[0]=1;
    for(long long i=1;i<N;i++){fact[i]=i*fact[i-1]%mod;}
    invfact[N-1]=binpow(fact[N-1],mod-2,mod);
    for(long long i=N-2;i>=0;i--){
        invfact[i]=(i+1)*invfact[i+1]%mpd;
    }
}
long long ncr(long long n,long long r,long long p){
    return (((fact[n]*invfact[n-r])%p)*invfact[r])%p;
}

class Solution {
  public:
    int bestNumbers(int n, int a, int b, int c, int d) {
        // code here
        function1();
        long long ans = 0;
        if(a==b){
            long long sum=n*a;
            while(sum>0){
                if(sum%10==c || sum%10==d){
                    return 1;
                }
                sum/=10;
            }
            return 0;
        }else{
            for(int i=0; i<=n; i++)
            {
                int sum = i*a+(n-i)*b;
                bool good = false;
                while(sum>0)
                {
                    if(sum%10==c || sum%10==d)
                    {
                        good = true;
                        break;
                    }
                    sum /= 10;
                }
                if(good)
                {
                    ans += ncr(n,i,mod);

                    ans %= mod;
                }
            }
            return ans;
        }
    }
};
