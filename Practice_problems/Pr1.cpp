// https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include<bits/stdc++.h>

using namespace std;

string iseven(int num){

    if(num % 2 ==0) return "even";
    else return "odd";
}
int main(){

    string numbersName[10] = {"","one","two","three","four","five","six","seven","eight","nine"};

    int ll;
    int UL;
    cin>> ll;

    cin>> UL;
    for(; ll<=UL ;ll++){

        if(1 <= ll && ll <= 9){
            cout<<numbersName[ll] << endl;
        }
        else if(UL > 9){
            cout<< iseven(ll) << endl;
        }
        
    }

    return 0;
}