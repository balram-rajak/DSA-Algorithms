package Stack;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class NGE {
    
    public static final void print(int s[]){
        
        for( Integer num : s){
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static int[] nextGreaterElements(int[] nums) {

        Stack<Integer> stack = new Stack<>();
        int[] res = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            while (!stack.isEmpty() && nums[stack.peek()] < nums[i]) {
                res[stack.pop()] = nums[i];
            }
            stack.push(i);
        }

        // for (int i = 0; i < nums.length; i++) {
        //     while (!stack.isEmpty() && nums[stack.peek()] < nums[i]) {
        //         res[stack.pop()] = nums[i];
        //     }
        // }

        while (!stack.isEmpty()) {
            res[stack.pop()] = -1;
        }
        return res;
    }

    public static void main(String[] args) {

        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));) {
            
            
            int t = Integer.parseInt(br.readLine());

            while (t-- > 0) {

                // Reading raw string
                String[] tokens = br.readLine().split(" ");
                
                // Creating an array of input size
                int arr[] = new int[tokens.length];

                // Parsing array elements from string
                for (int i = 0; i < tokens.length; i++) {
                    arr[i] = Integer.parseInt(tokens[i]);

                }

                // Call the function
                print(nextGreaterElements(arr));
                
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

    }
}
