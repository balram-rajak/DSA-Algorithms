#include<bits/stdc++.h>

using namespace std;

int main(){

    int T;
    cin >> T;

    while(T--){
        int n;
        cin>> n;
        for(int l=n; l>0; l--){
            for(int i=1; i<=2*n; i++){

                if( i > n-l+1 && i < n+l){
                    cout<<"#";
                    continue;
                }
                else cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}