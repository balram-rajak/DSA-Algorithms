// Demonstrating behaviour of getLine fn

#include<bits/stdc++.h>

using namespace std;

int main(){

    int T;
    cin>>T;

    // T++;
    // cin.ignore(); // ignores newline character

    while(T--){

        string s;

        getline(cin,s);

        cout<< s << endl;
    }
    return 0;
}