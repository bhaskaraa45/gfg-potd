/*
  This code is written by Bhaskar
*/

//User function Template for Java
class Solution
{
    public long[] smallerSum(int n,int arr[])
    {
        ArrayList<Integer> list = new ArrayList<>();
        for(int x : arr){
            list.add(x);
        }
        Collections.sort(list);

        HashMap<Integer , Long > hm = new HashMap<>();

        long sum = 0;

        for(int i=0 ; i < n ; i++){
            if(!hm.containsKey(list.get(i))){
                hm.put(list.get(i) , sum);

            }

            sum += list.get(i);
        }

        long[] ans = new long[n];

        for(int i=0 ; i < n ; i++){
            ans[i] = hm.get(arr[i]);
        }

        return ans;

    }
}

