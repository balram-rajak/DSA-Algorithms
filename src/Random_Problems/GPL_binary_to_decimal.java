
// https://www.hackerearth.com/problem/algorithm/gpl/

// import balramlib.Timer;
import java.util.Scanner;
import java.math.BigInteger;
class GPL_binary_to_decimal {
    
    private static BigInteger hash[] = new BigInteger[60];
    // private static Timer timer ;
    
    private static void print(Object a){
        System.out.println(a);
    }

    static
    {
        
        hash[0] = BigInteger.valueOf(1);
        for(int i=1; i< hash.length; i++){

            hash[i] = hash[i-1].multiply(BigInteger.valueOf(2));
            
        }
        
    }
    

    public static void main(String[] args){

        // try(Timer timer = new Timer();){
            Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        sc.nextLine();
        // print(T);

        while(T-->0){

            int n ;
            n = sc.nextInt();
            // print(n);

            sc.nextLine();
            String num = sc.next();

            // print(num);
            BigInteger decimalVal = BigInteger.valueOf(0);
            for( int i = n ; i> 0; i--){

                int digit = num.charAt(i - 1) - '0';
                decimalVal=decimalVal.add( BigInteger.valueOf(digit).multiply(hash[n- i]));
                // print(BigInteger.valueOf(digit).multiply(hash[n- i]));

            }
            // print(decimalVal);
            System.out.println(decimalVal);
            
        }

        sc.close();
        // }
    }
        
}