import java.util.function.IntUnaryOperator;
import java.util.Scanner;
public class count_Digits {
    
    private final static IntUnaryOperator getdigits = num -> {
        int count = 0;

        while(num >0){
            num /=10;
            count++;
        }

        return count;
    };

    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t>0){

            System.out.println(getdigits.applyAsInt(sc.nextInt()));
            t--;
        }
        sc.close();
        
    }
}
