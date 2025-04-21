// package Arrays;
import java.util.*;
import java.io.*;

public class Prefix_Sum {
    
    public static int maximumSumSubarray(int[] arr, int k){

        int[] prefixSum = new int[1000000];
        int sum=0;
        prefixSum[0]=arr[0];
        // prefixSum[1]=arr[0];

        for(int i = 0; i<arr.length; i++){

            if(i==0) prefixSum[i]=arr[i];
            else prefixSum[i] = arr[i]+prefixSum[i-1];

            int tempSum =0;

            if(i-(k-1)==0){
                tempSum = prefixSum[i];
            }
            else if((i-k)>=0){

                tempSum = prefixSum[i] - prefixSum[i-k];

            }
            if(tempSum > sum) sum = tempSum;
            
        }
        return sum;
    }

    public static void main(String[] args){

        try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in));){
            int t = Integer.parseInt(br.readLine());
        
            while(t-- > 0){

                String[] tokens = br.readLine().split(" ");
                int arr[] = new int[tokens.length];

                for(int i =0; i<tokens.length; i++){
                    arr[i]=Integer.parseInt(tokens[i]);

                }

                int k = Integer.parseInt(br.readLine());

                System.out.println(maximumSumSubarray(arr,k));
            }
        }catch(IOException e){
            e.printStackTrace();
        }

        

        


    }
}

