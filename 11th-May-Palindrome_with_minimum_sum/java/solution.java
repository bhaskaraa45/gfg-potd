/*
This Code is written by Bhaskar
*/

class Solution {
         private static boolean palindromeCheck(String s){
         int lo=0,hi=s.length()-1;
         while(lo<=hi){
             if(s.charAt(lo)!='?' && s.charAt(hi)!='?'){
                 if(s.charAt(lo)!=s.charAt(hi)){
                     return false;
                 }
             }
             lo++;hi--;
         }
         return true;
     }
     public static int minimumSum(String s) {
         // code here
         if(!palindromeCheck(s)){
             return -1;
         }
         StringBuilder sb = new StringBuilder(s);
         int lo=0,hi=sb.length()-1;

         while(lo<=hi){
             if(sb.charAt(lo)!='?' || sb.charAt(hi)!='?'){
                 if(sb.charAt(lo)!='?'){
                     sb.replace(hi,hi+1, String.valueOf(sb.charAt(lo)));
                 }else {
                     sb.replace(lo,lo+1, String.valueOf(sb.charAt(hi)));
                 }
             }
             lo++;hi--;
         }
         ArrayList<Character> list = new ArrayList<>();
         int n=sb.length();
         int x=0;
         for(int i=0;i<n/2;i++){
             if(sb.charAt(i)=='?'){
                 x++;
             }else{
                 if(x==0) {
                     list.add(sb.charAt(i));
                     continue;
                 }
                 else if(i-x-1 >=0){
                     char ch = (char) (((int)sb.charAt(i)+(int)sb.charAt(i-x-1))/2);
                     list.add(ch);
                 }else{
                     list.add(sb.charAt(i));
                 }
                 list.add(sb.charAt(i));
                 x=0;
             }
         }

         if(n%2!=0){
             if(sb.charAt(n/2)!='?'){
                 list.add(sb.charAt(n/2));
             }
         }
        if(list.isEmpty()) return 0;
         int ans=0;
         for(int i=0;i<list.size()-1;i++){
             int a = (int)(list.get(i));
             int b = (int)(list.get(i+1));
             int diff = Math.abs(a-b);
             ans+=diff;
         }
            ans*=2;
         return ans;

     }
}
