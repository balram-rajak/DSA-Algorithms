import java.util.Scanner;

public class Palindrome_Simple {
    
    public static boolean isPalindrome(int x) {
        
        String s = x+"";

        int length = s.length();
        for(int i=0; i<=length/2; i++){

            if(s.charAt(i) != s.charAt(length-1-i)){
                return false;
            }
        }

        return true;
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
