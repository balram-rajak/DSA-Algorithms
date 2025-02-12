// https://codeforces.com/problemset/problem/610/A
#include<bits/stdc++.h>

using namespace std;
int main(){

    int n;
    cin>>n;

    int rem=n % 4;
    
    int ways=0;
    int limit;
    if(rem == 0 || rem % 2 == 0) limit = n/4;
    else limit = -1;

    for(int l =1; l <= limit ; l++){
        
        if(2*l + 2*(n/2-l) == n && l != n/2 -l){
            ways++;
        }
    }
    cout<<ways<<endl;
    return 0;
}