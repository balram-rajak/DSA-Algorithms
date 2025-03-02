// Reverse a string


#include<bits/stdc++.h>

using namespace std;
int main(){

    string s;
    getline(cin,s);
    
    string outs;
    for( int i = s.size() -1 ; i>=0; i--){
        outs.push_back(s[i]);

    }

    cout<< outs << endl;

    return 0;
}