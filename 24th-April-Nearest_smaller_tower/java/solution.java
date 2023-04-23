/*
  This code is written by Bhaskar
*/

class Solution{
    static int [] nearestSmallestTower(int[] arr){
         int n = arr.length;
        Stack<Integer> stack = new Stack<>();
        int[] res = new int[n];
        Arrays.fill(res, -1);
        for (int i = 0; i < n; i++) {
            while (!stack.isEmpty() && arr[stack.peek()] >= arr[i]) {
                stack.pop();
            }
            if (!stack.isEmpty()) {
                res[i] = stack.peek();
            }
            stack.push(i);
        }
        stack.clear();
        for (int i = n-1; i >= 0; i--) {
            while (!stack.isEmpty() && arr[stack.peek()] >= arr[i]) {
                stack.pop();
            }
            if (stack.size() > 0 && (res[i] == -1 || Math.abs(stack.peek() - i) < Math.abs(res[i] -i))) {
                res[i] = stack.peek();
            }else if(stack.size() > 0 && (res[i] == -1 || Math.abs(stack.peek() - i) == Math.abs(res[i] -i))){
                if(arr[stack.peek()] < arr[res[i]]){
                    res[i] = stack.peek();
                }
            }
            stack.push(i);
        }
        return res;
    }
}
