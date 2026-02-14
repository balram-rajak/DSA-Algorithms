package Striver_A2Z_Sheet.Learn_the_Basics.Hashing;

// https://www.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1
import java.io.*;
import java.util.Map.*;
import java.util.*;
import java.util.stream.Collectors;

public class Top_K_Frequent_in_Array {
    
    public static ArrayList<Integer> topKFreq(int[] arr, int k) {
       
        Comparator<Object> cmp = (x,y) -> { 
            
            Integer o1 = (Integer) x;
            Integer o2 = (Integer) y;
            
            return -o1.compareTo(o2);
        };

        HashMap<Integer,Integer> m = new HashMap<>();

        for(int e : arr){

            if(m.get(e) != null){
                m.put(e,m.get(e)+1);
            }
            else{
                m.put(e,1);
            }

        }

        TreeMap<Integer,TreeSet<Integer>> top_k = new TreeMap<>(cmp);

        for( Map.Entry<Integer,Integer> e : m.entrySet()){

            Integer freq = e.getValue();
            Integer element = e.getKey();

            if(top_k.containsKey(freq)){

                top_k.get(freq).add(element);
            }
            else{
                TreeSet<Integer> ele = new TreeSet<>(cmp);
                ele.add(element);
                top_k.put(freq,ele);
            }
            
        }

        return top_k.entrySet().stream()
                .flatMap(x -> x.getValue().stream())
                .limit(k)
                .collect(Collectors.toCollection(ArrayList::new));

    }

    public static void main(String[] args) {

        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));) {
            int t = Integer.parseInt(br.readLine());

            while (t-- > 0) {

                int k = Integer.parseInt(br.readLine());
                String[] tokens = br.readLine().split(" ");
                int arr[] = new int[tokens.length];

                for (int i = 0; i < tokens.length; i++) {
                    arr[i] = Integer.parseInt(tokens[i]);

                }

                topKFreq(arr, k).stream()
                    .forEach(System.out::println);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

    }
}
