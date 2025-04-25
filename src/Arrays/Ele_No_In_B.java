
import java.util.*;
import java.util.stream.Collectors.*;


/* 
 * Find the elements that are present in A nut not in B
 * Sol: Used hashing with index as the value and value at index = freq of the number/index in B
 */
class Ele_No_In_B{

    public static ArrayList<Integer> findMissing(int[] a, int[] b){

        ArrayList<Integer> missing = new ArrayList<>();

        int[] freq = new int[100000];
        // Arrays.fill(freq,0);
        for(int i =0; i< b.length; i++){
            freq[b[i]]++;
        }

        for(int j = 0; j<a.length; j++){
            if(freq[a[j]]==0) missing.add(a[j]);
        }

        return missing;
    }
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        sc.nextLine();

        while(t-- >0){
            int a[] = Arrays.stream(sc.nextLine().split("\\s+")).mapToInt(Integer::parseInt).toArray();

            int b[] = Arrays.stream(sc.nextLine().split("\\s+")).mapToInt(Integer::parseInt).toArray();

            findMissing(a,b).forEach(System.out::print);
            System.out.println();
        }
        
        

    }
}