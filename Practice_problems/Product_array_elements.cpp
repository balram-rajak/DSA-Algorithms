#include<bits/stdc++.h>

using namespace std;

int main(){

    int size;
    cin >> size;

    long long int product = 1;
    for(;size>0;size--){
        int temp;
        cin>>temp;

        product = (product * temp);

    }

    cout << product << endl;
    return 0;
}