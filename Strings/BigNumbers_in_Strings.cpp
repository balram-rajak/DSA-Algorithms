// How to gandle big numbers in C++


#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    //  To get the number divide the ASCII of 0

    int last_digit = s[ s.size() - 1] - '0';

    cout<< last_digit << endl;

    cout<< s[2] - s[0]; // subtraction automatically converts the character into it's ASCII value
    return 0;
}