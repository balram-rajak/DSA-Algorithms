package Striver_A2Z_Sheet.Learn_the_Basics.Hashing;
// https://www.naukri.com/code360/problems/k-most-occurrent-numbers_625382?leftPanelTabValue=PROBLEM
import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;
import java.io.*;
import java.util.stream.Collectors;
import java.lang.Math;


public class Highest_and_Lowest_Frequency_elements {
    public static int[] getFrequencies(int []arr) {
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

        int freq_ele[] = new int[2];

        // Editorial Approach
        
        int minele = (int)Math.pow(10,9)+1;

        int maxele = 0;

        int minfreq = arr.length;
       
        int maxfreq = 0;

        for( Map.Entry<Integer,Integer> e : m.entrySet()){

            Integer freq = e.getValue();
            Integer element = e.getKey();

            if(freq > maxfreq){
                
                maxfreq = freq;

                maxele = element;
            }
            else if(freq == maxfreq){
                maxele = Math.min(element,maxele);
            }

            if(freq < minfreq){

                minfreq = freq;

                minele = element;
            }
            else if(freq == minfreq){
                minele = Math.min(element, minele);
            }
            
        }

        freq_ele[0] = maxele;
        freq_ele[1] = minele;
        
        // My Approach
        // TreeMap<Integer,TreeSet<Integer>> top_k = new TreeMap<>(cmp);

        // for( Map.Entry<Integer,Integer> e : m.entrySet()){

        //     Integer freq = e.getValue();
        //     Integer element = e.getKey();

        //     if(top_k.containsKey(freq)){

        //         top_k.get(freq).add(element);
        //     }
        //     else{
        //         TreeSet<Integer> ele = new TreeSet<>();
        //         ele.add(element);
        //         top_k.put(freq,ele);
        //     }
            
        // }

        // freq_ele[0]=top_k.get(top_k.keySet().stream()
        //         .max( (x,y) -> x.compareTo(y)).get()).stream().min((x,y) -> x.compareTo(y)).get();

        // freq_ele[1]=top_k.get(top_k.keySet().stream()
        //         .min( (x,y) -> x.compareTo(y)).get()).stream().min((x,y) -> x.compareTo(y)).get();

        return freq_ele;
    }
}
