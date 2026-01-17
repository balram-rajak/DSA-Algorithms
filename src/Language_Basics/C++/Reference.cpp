#include<bits/stdc++.h>

using namespace std;

int main(){

    int a = 3;

    int &b = a;

    // b = a;
    b = 8;
    cout<< a;
    return 0;
}