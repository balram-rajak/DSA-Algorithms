/*
Given N strings and Q queries.
In each . query . you . are . given . a. string
print frequency of that string

6 N <= 10^6
7 |S| <= 100
8 Q <= 10 ^ 6

*/
using namespace std;

void printFreq(auto m){

        cout<< (*m).second << endl;
}

int main(){

    unordered_map<string, int> m;
    int n; cin>> n;
    string s;
    for(int i=0; i<n; i++){

        cin >> s;
        m[s]++;
    }

    int Q;
    cin>> Q;

    while(Q--){
        cin >> s;
        cout<< m[s] << endl;

    }
}