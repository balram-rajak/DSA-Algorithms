#include<bits/stdc++.h>

using namespace std;

int main(){

    pair<int,string> p;

    p = {2, "abcd"};

    pair<int, string> p1 = p;

    pair<int, string> &p2 = p;

    p = {3, "abcd"};

    cout<< p1.first << " " << p1.second << endl;

    cout<< p2.first << " " << p2.second << endl;

}