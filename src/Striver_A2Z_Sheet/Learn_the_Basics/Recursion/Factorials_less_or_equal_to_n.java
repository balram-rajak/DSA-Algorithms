import java.util.ArrayList;
import java.util.Scanner;

public class Factorials_less_or_equal_to_n {
    
    static void print(ArrayList<Long> list){

        for(Long val : list){

            System.out.print(val+" ");
        }

        System.out.println();
    }
    public static ArrayList<Long> arr = new ArrayList<>();
    
    static void getFact(long fact,long n,long limit){
    
        fact *= n;

        if(fact>limit) {
            
            return; 
            
        }

        arr.add(fact);        
        
        getFact(fact,++n,limit);

        return;
        
    }
    
    static ArrayList<Long> factorialNumbers(long n) {
        
        arr.clear();
        getFact(1,1,n);
        
        return arr;
    }
    
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t > 0) {

            print(factorialNumbers(sc.nextInt()));
            t--;
        }
        sc.close();

    }
}
