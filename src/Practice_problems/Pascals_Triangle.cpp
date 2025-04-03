#include<bits/stdc++.h>
// #include "Timer.h"

using namespace std;

long long lastTerm[40]={0};
long long temp[40]={0};
int main(){
    // Timer timer;

    int T;
    cin>>T;

    while(T--){
    
        int n;
        cin>>n;
        lastTerm[40]=0;
        temp[40]={0};
        lastTerm[0]=1;
        for(int i = 0; i< n; i++)
        {

            for(int j = 0; j< i+1; j++){

                if(j == 0 || j == i){
                    cout<< 1 <<" ";
                    temp[j]=1;
                }else{
                    temp[j]= lastTerm[j-1] + lastTerm[j];
                    cout<<temp[j] << " ";
                }
                
            }

            for(int j = 1; j<= i; j++){
                lastTerm[j]=temp[j];
            }

            cout<< endl;
            
            
        }
    }
}