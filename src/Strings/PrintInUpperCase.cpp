#include<bits/stdc++.h>

using namespace std;

char upper(char c){
    if(c-'a' >=0){
        return (char)(c - 'a'+'A');
    }
    else return c;
}
void usingArithmetic(){

    string s;
    getline(cin,s);

    for(int i=0; i<s.size(); i++){

        if(s[i] != ' '){
            cout<< upper(s[i]);
        }
        else{
            cout<< endl;
        }
    }
}

void usinginputStream(){

    while(true){
        string s;
        cin>> s;

        if(s.size() == 0) break;
        for(int i=0; i<s.size(); i++){
            cout<<upper(s[i]);
        }
        cout<<endl;
    }
}
int main(){

    usinginputStream();
    

}