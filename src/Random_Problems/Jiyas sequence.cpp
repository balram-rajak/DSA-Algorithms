// https://assessment.hackerearth.com/problem/algorithm/jiyas-sequence/
#include<bits/stdc++.h>
// #include "Timer.h"

using namespace std;

int main(){

    // Timer timer;
    int T;
    cin >> T;

    while(T--){

        int n;
        long long product=1;
        cin >> n;
        for(int i =0; i< n; i++){
            int temp;
            cin>> temp;
            product = product * temp;
        }

        int rem = product % 10 ;
        if(rem == 2 || rem == 3 || rem == 5){
            cout<<"YES" << endl;
        }else{
            cout<<"NO" << endl;
        }
    }
}