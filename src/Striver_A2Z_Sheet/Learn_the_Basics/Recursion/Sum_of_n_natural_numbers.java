public class Sum_of_n_natural_numbers {
    
    int sumOfSeries(int n) {

        if(n==1) return 1;
        else return n + sumOfSeries(n-1);
    }
}
