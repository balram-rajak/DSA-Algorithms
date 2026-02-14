import java.util.Scanner;

// https://leetcode.com/problems/valid-palindrome/

public class Is_String_Palindrome {
    
    public static boolean isPalindrome(String s) {
        
        // Replace non-alphaneumeric characters , convert to lowercase

        String temp = s.replaceAll("[^\\w]|[_]","");

        temp = temp.toLowerCase();

        // Reverse the new alphaneumeric string
        int length = temp.length();
        for(int i=0; i<length/2; i++){

            char forward = temp.charAt(i);
            if( forward !=temp.charAt(length-i-1)) return false;
        }

        return true;
    }

// https://www.naukri.com/code360/problems/check-palindrome-recursive_624386

public static boolean isRecursivePalindrome(String s){

    int length = s.length();

    boolean currentChar = true;

    if(length >1)
    currentChar = s.charAt(0)==s.charAt(length-1);

    if(length > 3){
        return currentChar && isRecursivePalindrome(s.substring(1, length-1));
    }

    return currentChar;
}
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        sc.nextLine();

        while (t > 0) {

            System.out.println(isRecursivePalindrome(sc.nextLine()));
            t--;
        }
        sc.close();

    }
}
