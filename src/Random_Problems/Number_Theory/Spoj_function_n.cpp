#include<bits/stdc++.h>
// #include "Timer.h"

using namespace std;

int main(){

    // Timer t;
    int l, r;

    cin>> l >> r;

    int last = 0;
    int n=0;
    for(int j = 1; j<l-1; j++){
        last = last + ((l-1) % j);
    }

    for(int i =l; i<=r; i++){

        int fn = 0;

        for(int j=1; j<i; j++){
            fn = fn + (i % j);
        }

        if(i -1 && last == fn){
            n=i;
            break;
        }else{
            last = fn;
        }
    }
    cout<< ((n)*(2 + (n-1)))/2;
}