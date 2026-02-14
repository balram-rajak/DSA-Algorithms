import java.util.Scanner;

public class Reverse_array {

    static int[] takeInput(Scanner sc,int sz){

        int arr[] = new int[sz];

        int index = 0;
        while(index < sz){

            arr[index] = sc.nextInt();
            ++index;
        }

        return arr;
    }

    static void print(int list[]){

        for(int val : list){

            System.out.print(val+" ");
        }

        System.out.println();
    }
    
    public static void reverseArray(int arr[]) {
        int sz = arr.length;
        
        int _arr_[] = arr.clone();
        
        for(int val : _arr_){
            arr[--sz] = val;
        }
        
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t > 0) {

            int sz = sc.nextInt();
            System.out.println("sz:"+sz);
            int input[] = takeInput(sc,sz);
            reverseArray(input);
            print(input);
            t--;
        }
        sc.close();

    }
}
