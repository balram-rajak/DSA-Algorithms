#include<bits/stdc++.h>

using namespace std;

int main(){

    double x=100000;
    double y=100000;

    cout<< x * y<<endl;

    double z = x *y;
    // prints value without scientific notation
    cout<< fixed << z << endl;
    // setprecision fn sets count of numbers after decimal point
    cout<< fixed << setprecision(0) << z<< endl;

    x=1000000000000;
    y=1000000000000;

    z=x*y;
    cout<< z ;

    return 0;
}