public class Print_name_N_times {
   
    void printGfg(int n) {
        if(n>0) {
            System.out.print("GFG ");
            printGfg(n-1);
        }
    }
}
