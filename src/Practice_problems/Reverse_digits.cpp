// https://www.codechef.com/LRNDSA01/problems/FLOW007

#include<bits/stdc++.h>

using namespace std;

long long int exponentCal(int num,int power)
{

    long long int exponentProduct=1;
    for(;power>0;power--){
        exponentProduct = exponentProduct * num;
    }
    return exponentProduct;
}

int main(){

    int T;
    cin>>T;
    while(T--){
        int num;
        cin>>num;
        int digits[7];
        int rem=num % 10;
        int j=0;
        int size=0;
        while(num !=0 ){

            
            digits[j]=rem;
            num=num/10;
            rem=num % 10;
            j++;
            size++;
        }

        int reverse=0;
       

        for( int sz=0;sz <size;sz++){
           
            int exponent=size-sz-1;

            // 10^x = e^(x log 10) = exp(exponent * log(10))
            int power=exponentCal(10,exponent);
            // cout<<"Power " << power;
            reverse+=digits[sz]*power;
            
            // cout << "reverse " << reverse << endl;
            
        }

        cout<< reverse << endl;
        
    }
    return 0;
}