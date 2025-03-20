#include<bits/stdc++.h>

int main(){

    int n;
    scanf("%d",&n);
    auto startTime = std::chrono::high_resolution_clock::now();
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
    auto endTime = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = endTime - startTime;
    std::cout << "Execution time: " << duration.count() << " ms" << std::endl;
    return 0;
}