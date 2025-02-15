// https://codeforces.com/contest/1102/problem/A

#include<bits/stdc++.h>

using namespace std;

// long int modulos(int n){

//     if (n<0) return -1 * n;
//     else return n;
// }

int main(){

    int n;
    cin>>n;
    // int  sumA=0;
    // int  sumB=0;
    long long sum = (n * (n+1)) / 2;

    if(sum % 2 ==0 ) cout<<0;
    else cout<<1;
    // **Brute Force**
    // do{
        
    //     if( modulos(sumA - (sumB+n)) <  modulos((sumA+n) - (sumB)) ) sumB+=n;
    //     else sumA+=n;
    // }while(n--);
    // cout<< modulos(sumA -sumB);
    return 0;
}