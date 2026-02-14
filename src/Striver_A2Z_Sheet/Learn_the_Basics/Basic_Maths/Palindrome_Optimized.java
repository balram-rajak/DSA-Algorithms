import java.util.Scanner;
public class Palindrome_Optimized {
    public static boolean isPalindrome(int x) {

        int rev = 0;
        int y=x;

        while(x > 0){

            rev = rev * 10 + x % 10;
            x /= 10;
        }

        return rev == y;
        // if(x == 0) return true;
        // if(x % 10 == 0) return false;

        // if(x< 0) return false;

        // int reversedNumber = 0;
        // while(x > reversedNumber){

        //     int rev = x % 10;

        //     reversedNumber = reversedNumber * 10 + rev;

        //     x /= 10;

        //     if(x == reversedNumber) return true;
        // }

        // reversedNumber /=10 ;
        
        // if(x == reversedNumber) return true;

        // return false;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t > 0) {

            System.out.println(isPalindrome(sc.nextInt()));
            t--;
        }
        sc.close();

    }
}
