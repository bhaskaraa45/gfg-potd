/*
  This code is written by Bhaskar
*/

class Solution {
    public static int finLength(int N, int[] color, int[] radius) {
        // code here
        ArrayList<Integer> col = new ArrayList<>();
        ArrayList<Integer> rad = new ArrayList<>();
        
        col.add(color[0]);
        rad.add(radius[0]);
        
        for(int i=1 ; i< N ; i++){
            if(col.size()>0 && rad.size()>0 && (color[i]==col.get(col.size()-1)) && (radius[i]==rad.get(rad.size()-1))){
                col.remove(col.size()-1);
                rad.remove(rad.size()-1);
            }else{
                col.add(color[i]);
                rad.add(radius[i]);
            }
        }
        
        return col.size();
    }
}
