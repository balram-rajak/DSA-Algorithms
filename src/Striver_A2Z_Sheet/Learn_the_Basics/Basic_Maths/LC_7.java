import java.util.Scanner;

// https://leetcode.com/problems/reverse-integer/

public class LC_7 {

    public static int reverse(int n) {

        try {

            StringBuilder sb = new StringBuilder();

            if (n == 0)
                return 0;
            boolean negative = false;
            if (n < 0) {
                n *= -1;
                negative = true;
            }
            while (n > 0) {
                int rem = n % 10;

                sb.append(rem);

                n /= 10;

            }

            int result = Integer.parseInt(sb.toString());

            return negative ? result * -1 : result;

        } catch (NumberFormatException e) {

            // System.out.println(e.getMessage());
            return 0;
        }

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
