// https://www.spoj.com/submit/TEST/

#include<bits/stdc++.h>
#include "Timer.h"

using namespace std;

int main(){
    Timer timer;

    int temp;
    for(;;){
        cin>>temp;
        if(temp != 42) cout<< temp << endl;
        else break;
    }
    return 0;
}