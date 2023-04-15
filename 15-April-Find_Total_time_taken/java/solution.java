/*
  This code is written by Bhaskar
*/


class Solution
{
 public static long totalTime(int n,int arr[],int time[])
    {
        Set<Integer> list = new HashSet<>();
        int t = -1;
        int prevT=0;
        for(int i=0 ; i < n; i++){
            int curr=1;
            if(!list.contains(arr[i])){
                list.add(arr[i]);
            }else{
                curr = time[arr[i]-1];
            }

            t+= curr;

        }

        return t;
    }

}
