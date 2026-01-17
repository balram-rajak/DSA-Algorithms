// #Pending
// https://www.codechef.com/problems/ICL1905

#include<bits/stdc++.h>
// #include "Timer.h"

using namespace std;

const int sz = (1e6+10)+1;
int C[sz];
int D[sz];

long square(int diff){
    return diff * diff;
}

long maxLR(int D[], int L, int R){

    long max = 0;
    long min=1e9+10;
    for(int i = L; i<=R; i++){

        if(D[i] > max) max = D[i];
        if(D[i] < min) min = D[i];
    }
    return square(max - min);
    
}
int main(){

    // Timer timer;

    int T;
    cin>>T;

    while(T--){

        int N, A;

        cin>>N >> A;

        // Initialize the array to 0
        memset(C, 0, sizeof(C));
        memset(D, 0, sizeof(D));

        long profitMax = 0;
        for(int i = 1; i<=N; i++){

            int c;
            cin>> c >> D[i];

            C[i] = C[i-1] + c; 
        }

        long max = 0;
        long min=10000000;
        for(int i = 1; i<N; i++){
            if(D[i] > max) max = D[i];
            if(D[i] < min) min = D[i];
            for(int j =i+1; j<=N; j++){
                if(D[j] > max) max = D[j];
                if(D[j] < min) min = D[j];
                long profit = ((j - i +1) * A) - (C[j]-C[i-1]) - square(max - min);

                if(profit > profitMax) profitMax = profit;
            }
        }

        cout<<profitMax<<endl;

    }


    return 0;
}