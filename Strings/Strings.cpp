// covers the basic concepts of strings


#include<bits/stdc++.h>

using namespace std;

int main(){

    string str1, str2;

    cin>> str1;
    cin>> str2;

    cout<< str1 + " " + str2 << endl;
    // modify characer at index 0

    str1[0] = 'x';
    // str1[0] = "error"; Wrong
    cout<< "index " << 0 << str1[0] << endl;

    // Getline fn

    getline(cin, str1);

    cout<< str1;


    return 0;
}