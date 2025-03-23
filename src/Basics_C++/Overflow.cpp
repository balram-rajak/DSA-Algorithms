#include<bits/stdc++.h>
using namespace std;
int main(){

    int x=100000;
    int y=100000;
    
    // calculation is happening in int
    long long int z= x* y;
    cout << z<< endl;
    // 1LL = 1 long long int.
    // variable is changed to long long int
    z= x * 1LL * y;

    cout<< z<< endl;

    cout << INT_MAX + 1;

    return 0;
}