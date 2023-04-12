class Solution
{
    ArrayList<long []> function(Integer [] a){
        int n=a.length;
        long [] p = new long[n+1];
        for(int i=0;i<n;i++){
            p[i]=a[i];
            if(i>0){
                p[i]+=p[i-1];
            }
        }
        ArrayList<long []> temp = new ArrayList<>();
        long arr[] = {0,0};
        temp.add(arr);
        for(int i=1;i<n;i++){
            int l=1,h=i;
            long dif = (long)2e18;
            long [] t = new long[2];

            while(l<=h){
                int mid=(l+h)/2;
                long x=p[mid-1];
                long y=p[i]-x;

                if(Math.abs(x-y)<dif){
                    dif=Math.abs(x-y);
                    t[0] = x; t[1] = y;
                }

                if(x>y){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            temp.add(t);
        }

        return temp;
    }

    long minDifference(int N, int arr[])
    {

        Integer[] A = new Integer[arr.length];
        Arrays.setAll(A , i->arr[i]);

        long ans = (long)2e18;
        ArrayList<long []> x = function(A);
        Collections.reverse(Arrays.asList(A));

        ArrayList<long []> y = function(A);
        Collections.reverse(y);
        for(int i=1;i+2<N;i++) {
            long temp1 =Math.max(x.get(i)[0],x.get(i)[1]);
            long temp2 = Math.max(y.get(i+1)[0],y.get(i+1)[1]);
            long temp3 = Math.max(temp1, temp2);

            long t1 = Math.min(x.get(i)[0],x.get(i)[1]);
            long t2 = Math.min(y.get(i+1)[0],y.get(i+1)[1]);
            long t3 = Math.min(t1,t2 );

            ans=Math.min(ans,  temp3-t3 );
        }
        return ans;
    }
}
