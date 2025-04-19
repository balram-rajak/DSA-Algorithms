#include<bits/stdc++.h>
#include "Timer.h"

using namespace std;

int frequency[10000000]={0};
int main(){

    Timer timer;

    int n;

    cin>> n;

    
    for(int i =0; i<n; i++){
        int temp;
        cin>>temp;

        frequency[temp]++;
    }

    int q;
    cin>>q;
    while(q--){
        int temp;
        cin>> temp;

        cout<< frequency[temp] << endl;
    }

    return 0;
}