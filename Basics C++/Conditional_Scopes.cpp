#include<bits/stdC++.h>
using namespace std;
int main(){

    //  To declare different scope
    {
        int x=0;
    }

    int a = 5;
    int b = 6;
    int c = 9;

    // directly print conditional statement
    cout<< ((a > b) && ( b > c)) << endl;

    return 0;

}