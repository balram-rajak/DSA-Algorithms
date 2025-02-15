#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d",&n);
    int reverse = 0;
    for(int l =1; l >= 1 && l<= 2*n-1;){

        int val=n;

        for(int i=1; i<= 2*n-1 && val >= n-l+1; i++){

            
            printf("%d ",val);
            if(i < l ){
                
                val--;
            }
            else if( i > 2*n-l-1 ){

                val++;
            }
            
            if( l == 1 ){ 
                continue;
            }

        }

        printf("\n");

        if(reverse && n != 1) {
            l--;
        }
        else l++;
        
        if( l == n) {
            reverse = 1;
        }
        
    }
    return 0;
}