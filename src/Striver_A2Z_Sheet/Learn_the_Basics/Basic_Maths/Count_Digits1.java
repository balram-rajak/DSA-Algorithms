// package Striver_A2Z_Sheet.Basics.Basic_Maths;

import java.util.Scanner;

public class Count_Digits1 {
    static int evenlyDivides(int num) {
        int count = 0;
        int original_num = num;
        while(num >0){
            int rem = num % 10;
            
            if(rem!=0 && original_num % rem ==0 )
                count++;
            num /=10;
        }

        return count;
    }

     public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t>0){

            System.out.println(Count_Digits1.evenlyDivides(sc.nextInt()));
            t--;
        }
        sc.close();
        
    }
}
