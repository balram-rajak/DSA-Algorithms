
#include<bits/stdc++.h>

using namespace std;

int hashA[4] = {1,1,1,1};
int hashB[4] = {1,1,1,1};

int primeNum[100]={0};

void populatePrime(int range){

    primeNum[1]=1;
    primeNum[2]=2;
    primeNum[3]=5;
    for(int i=4; i<range; i++){

    }
}

int findGreater(int x, int y){

    return x > y ? x : y;
}

int lcm(int a, int b){

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

        // cout<<hashA[2] << " "<< currentB << endl;
        // cout<< hashA[0];
    }
    return findGreater(hashA[2], hashB[2]) * findGreater(hashA[3], hashB[3]) * hashA[0] * hashB[0];
}

int main(){

    int a, b;

    cin>>a;
    cin>>b;
    // cout<<a << b;
    cout<<lcm(a,b);
}