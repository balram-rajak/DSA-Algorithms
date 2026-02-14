
// package Striver_A2Z_Sheet.Basics.Basic_Maths;
import java.util.*;

public class Reverse_a_Number {

    public static int reverse(int n) {

        int reverse = 0;
        while(n > 0){

            int rem = n % 10;

            reverse = reverse * 10 + rem;
            n /= 10;
        }

        return reverse;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t > 0) {

            System.out.println(reverse(sc.nextInt()));
            t--;
        }
        sc.close();

    }
}
