public class Print_1_to_N {
    
    public void printNos(int n) {
        
        if(n>0){
            
            printNos(n-1);
            System.out.print(n+" ");
        }
    }
}
