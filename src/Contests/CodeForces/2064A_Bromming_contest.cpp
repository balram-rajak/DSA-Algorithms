//  Brogramming Contest

#include<bits/stdc++.h>

using namespace std;
int main(){

    int T, size,counter;
    string s;
    cin>>T;
    while(T--){

        counter=0;
        cin>>size;
        cin>>s;
        
        char findCh='1';

        for(int i=0; i< size; i++){

            if(s[i] == findCh){
                counter++;
                findCh = (findCh=='0' ? '1' : '0');
            }
        }
        cout<< counter << endl;
    }
    return 0;
}