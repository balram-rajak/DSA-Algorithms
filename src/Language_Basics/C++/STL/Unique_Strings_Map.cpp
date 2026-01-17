#include<bits/stdc++.h>
using namespace std;

void printMap(map<auto, auto> m){
    cout<< m.size() << endl;
    for(auto &p : m){
        cout<< p.first << " " << p.second << endl;
    }
}

int main(){

    int n;
    cin >> n;
    string s;

    map<string,int> m;

    for(int i=0; i<n; i++)
    {
        cin >> s;
        m[s]++;

    }

    for(auto val : m){

        if(val.second == 1) cout<< val.first << endl;
    }
}