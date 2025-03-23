#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int T;
    cin>>T;
    cin.ignore();
    while(T--)
    {
        getline(cin,s);
        int size = s.size();
        bool isPalindrome=true;
        if(size >1){
        
            int middlepos = size/2;
            int pos = size % 2 ==0 ? middlepos : middlepos + 1;
            for(int i=0 ; i< pos; i++){

                if( s[i] == s[size-i-1]) continue;
                else {
                    cout<< "NO" << endl;
                    isPalindrome=false;
                    break;
                }
            }
        }
        if(isPalindrome) cout<<"YES" << endl;
    }
        
    
    return 0;
}