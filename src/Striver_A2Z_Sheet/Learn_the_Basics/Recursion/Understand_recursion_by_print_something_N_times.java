
import java.util.*;
import java.util.stream.Collectors;

class Understand_recursion_by_print_something_N_times{

    public static int[] printNos(int x) {
        
        // System.out.println(x);

        int ele[] = new int[x];

        ele[x-1] = x;
        
        if(x==1){
            return new int[]{1};
        }
        int _ele_[] = printNos(--x);

        for(int i=0; i<_ele_.length; i++){

            ele[i] = _ele_[i];
        }
        return ele;
    }
    public static void main(String[] args){

        int n;

        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        int[] arr = printNos(n);

        // System.out.println(arr.length);
        for(int val : arr){
            System.out.println(val);
        }

    }
}