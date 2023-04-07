class Solution {
    public static ArrayList<Integer> makeBeautiful(int[] arr) {
        // code here
        ArrayList<Integer> list = new ArrayList<>();
        
        list.add(arr[0]);
        
        for(int i =1 ; i< arr.length ; i++){
            if(list.isEmpty()){
                list.add(arr[i]);
            }
            else
            {
                if(list.get(list.size()-1) >=0 && arr[i] >=0 ){
                    list.add(arr[i]);
                }
                else if(list.get(list.size()-1) < 0 && arr[i] < 0 ){
                    list.add(arr[i]);
                }
                else{
                    list.remove(list.size()-1);
                }
            }
        }
        return list;
    }
}
