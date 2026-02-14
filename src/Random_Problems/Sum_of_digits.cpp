// https://www.codechef.com/problems/FLOW006

#include<bits/stdc++.h>

using namespace std;

int main(){

    int T;
    cin>> T;
    while(T--){
        int num;
        cin>>num;
        int sum=0;
        
        while(num !=0 ){

            int rem=num % 10;
            sum+=rem;
            num=num/10;
        }

        cout<<sum << endl;
    }

    return 0;
}