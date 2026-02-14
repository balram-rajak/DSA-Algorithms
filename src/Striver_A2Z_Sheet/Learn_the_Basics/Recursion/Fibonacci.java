import java.util.Scanner;

// https://leetcode.com/problems/fibonacci-number/description/
// https://www.naukri.com/code360/problems/print-fibonacci-series_7421617?leftPanelTabValue=SOLUTION

public class Fibonacci {

    static void print(int list[]) {

        for (int val : list) {

            System.out.print(val + " ");
        }

        System.out.println();
    }

    static void memoizedFibonacci(int n, int arr[]) {

        if (n == 0 || n == 1) {
            arr[n] = n;
            return;
        }

        if (arr[n] == 0) {
            if (arr[n - 1] == 0) {
                memoizedFibonacci(n - 1, arr);
            }

            if (arr[n - 2] == 0) {
                memoizedFibonacci(n - 2, arr);
            }

            arr[n] = arr[n - 1] + arr[n - 2];
        }
    }

    // ------------------------------------------------

    private static int fibo[] = new int[45];

    private static void fibonacci(int last, int lasttoLast, int index) {

        if (index > 44)
            return;

        int temp = last + lasttoLast;
        fibonacci(temp, last, index + 1);
        fibo[index] = temp;

    }

    // Function to return list containing first n fibonacci numbers.
    public static int[] fibonacciNumbers(int n) {

        if (fibo[n - 1] == 0) {

            fibo[0] = 0;
            fibo[1] = 1;
            fibonacci(fibo[1], fibo[0], 2);

        }

        // memoizedFibonacci(n-1,fibo); // Memoized

        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {

            arr[i] = fibo[i];

        }

        return arr;

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        sc.nextLine();

        while (t > 0) {

            print(fibonacciNumbers(sc.nextInt()));
            t--;
        }
        sc.close();

    }
}
