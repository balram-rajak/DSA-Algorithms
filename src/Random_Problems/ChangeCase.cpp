#include<bits/stdc++.h>
// #include "Timer.h"

using namespace std;

// const N=100000;
// int isprime[N]={1};

bool isPrime(int x){
    if(x==2||x==3) return true;
    if(x==0||x==1) return false;
    for(int i=2; i<=x/2; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int mod(int x){
    if(x<0) return -1*x;
    else return x;
}

int main(){
    // Timer timer;

    string s;
    cin>>s;

    int count=0;
    for(int i=0; i<s.size(); i++){

        // int diff = s[i] - 'Z';
        if( s[i] <='Z'){
            
            count= count -(s[i]-'A'+'a');
            // cout<<count << endl;
        }else if(s[i] >='a'){
            // cout<<"Upper"<<s[i] - 'a'+'A'<< endl;
            count =count + (s[i] - 'a'+'A');
            // cout<<count << endl;
        }
    }

    // cout<<count;
    cout<<isPrime(mod(count)) ? "1" : "0";
}