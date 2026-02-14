// package Arrays;
import java.util.*;
import java.io.*;

import balramlib.Timer;
public class Bubble_Sort {
    
    static void swap(int max, int j, int[] num){

        int temp = num[max];

        num[max] = num[j];

        num[j] = temp;
    }

    // according to the flag the array will be sorted int that order
    static void bubbleSort(int[] num, boolean ascOrder){

        int n = num.length;
        for(int i=0; i< n-1; i++){

            boolean isSwaped= false;
            for(int j = 0; j< n-i-1; j++){
                
                if(num[j] > num[j+1] == ascOrder){
                    swap(j, j+1, num);
                    isSwaped = true;
                }

            }
            // Decreasing time complexity to O(N)
            if(!isSwaped) break;
        }

    }
    public static void main(String[] args){       

       
        try(BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
        Timer timer=new Timer();){
            
            int n = Integer.parseInt(b.readLine());
            int[] num = new int[n];
            String input = b.readLine();
            String[] sarr = input.split("\\s+");

            for(int i = 0; i< sarr.length; i++){
                num[i]= Integer.parseInt(sarr[i]);
                
            }

            // Acending order
            bubbleSort(num, true);

            for(int i =0; i<n; i++){
                System.out.print(num[i]+" ");
            }

           System.out.println();

            // Descending order
            bubbleSort(num, false);

            for(int i =0; i<n; i++){
                System.out.print(num[i]+" ");
            }
        }
        catch(Exception e){
            e.printStackTrace();
        }

    }
}
