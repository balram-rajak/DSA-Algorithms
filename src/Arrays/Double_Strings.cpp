#include<bits/stdc++.h>
// #include "Timer.h"

using namespace std;

// int frequency['z'-'a']={0};
int main(){

    // Timer timer;
    int t;
    cin>>t;

    while(t--){
        int frequency['z'+1]={0};
        // cout<<'z'-'a';
        string s;
        bool isDouble=false;
        cin>>s;

        for(int i=0; i<s.length(); i++){

            int freqIndex=s[i];
            frequency[freqIndex]++;
            if(frequency[freqIndex]>=2){
                isDouble=true;
                cout<<"Yes"<<endl;
                break;
            }
            
        }
        if(!isDouble) cout<<"No"<<endl;
    }

}
