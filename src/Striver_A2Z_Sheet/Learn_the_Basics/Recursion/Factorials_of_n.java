import java.util.*;

public class Factorials_of_n {
    
    // Calculating factorial in reverse direction
    static long reverseFact(long fact,long n,long limit){
    
        fact *= n;

        if(n == limit) {
            
            return fact; 
            
        }
        
       return reverseFact(fact,++n,limit);

    }

    static int fact(int n){

        if(n<=1) return 1;

        return n * fact(n-1);
    }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t > 0) {

            System.out.println(fact(sc.nextInt()));
            System.out.println(reverseFact(1,1,sc.nextInt()));
            t--;
        }
        sc.close();

    }
}
