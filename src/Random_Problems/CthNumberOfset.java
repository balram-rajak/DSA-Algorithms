import java.util.*;
class CthNumberOfset{

    static int hashA[] = new int[4];
    static int hashB[] = new int[4];

    static{
        Arrays.fill(hashA,1);
        Arrays.fill(hashB,1);
    }

    private static void print(Object a){
        System.out.print(a+" ");
    }

    private static int findGreater(int x, int y){

        return x > y ? x : y;
    }

    private static int lcm(int a, int b){

        int currentA=a;
        int currentB=b;

        for(;currentA > 1 || currentB > 1;){
            
            if(currentA % 2 ==0){
             hashA[2] = hashA[2] * 2;    
             currentA = currentA /2 ;
            }else if(currentA % 3 == 0){
                hashA[3] = hashA[3] * 3;
                currentA= currentA /3 ;
            }
            else{
                hashA[0] = hashA[0] * currentA;
                currentA = 1; 
            }

            if(currentB % 2 ==0){
             hashB[2]=hashB[2] * 2;    
             currentB=currentB / 2 ;
            }else if(currentB % 3 == 0){
                hashB[3]=hashB[3] * 3;
                currentB = currentB / 3 ;
            }
            else{
                hashB[0]=hashB[0] * currentB; 
                currentB = 1;
            }
        }

        return findGreater(hashA[2], hashB[2]) * findGreater(hashA[3], hashB[3]) * hashA[0] * hashB[0];

        

    }
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();

        int b = sc.nextInt();

        int c = sc.nextInt();

        int counterA=1;
        int counterB=1;
        int lastEle=0;
        
        // Find last element
        
        // for(int i =1; i<=c; i++){

        //     int valueA = (counterA) * a;
        //     int valueB = (counterB) * b;

        //     if(valueA< valueB){
        //         counterA++;
        //         lastEle = valueA;
        //     }else if( valueA == valueB){
        //         counterA++; counterB++;
        //         lastEle = valueA;
        //     }
        //     else{
        //         lastEle = valueB;
        //         counterB++;
        //     }
           
        // }

        for(int i = 2; c > 0; i++){

            if(i % a == 0 || i % b ==0){
                lastEle = i;
                c--;
            }
        }
        
        int lcm = 1;

        // lcm with brute force
        for(int i = 2; i<=a*b; i++){
            
            if( i % a ==0 && i % b ==0){
                lcm = i;
                break;
            }
        }

        int step;
        if(lastEle % a == 0){

            if(lastEle % b ==0){
                // step = lcm(a,b); Need to implement Euclidean Algorithm later
                step = lcm;
            }else{
                step = a;
            }
        }else{
            step =b;
        }      

        for(int i =lastEle; i>0; i=i-step){
            print(i);
        }

        System.out.print(0);

    }
}