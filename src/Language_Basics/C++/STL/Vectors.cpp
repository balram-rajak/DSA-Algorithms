#include<vector>
// #include<bits/stdc++.h>
using namespace std;

// learning Vectors

void printVec(vector<int> &v){
    printf("size: %d\n",v.size());
    for(int i =0; i<v.size(); i++){
        cout<<v[i] << " ";
    }
    cout<<endl;
    v.push_back(9);
}

void printPairVec(vector<pair<int,string>> &v){
    printf("size: %d\n",v.size());
    for(int i =0; i<v.size(); i++){
        cout<<v[i].first << " "<< v[i].second;
    }
    cout<<endl;
}

int main()
{

    vector<int> v;
    
    vector<int> v2(10,3); // Vector of size 10 all initialized with 3
    int n;
    cin >> n;
    for( int i = 0; i< n; i++){
        v.push_back(i);
    }

    v2 = v;
    v2.push_back(8);
    printVec(v);

    // After a value pushed through refence variable
    printVec(v);
    printVec(v2);

    // Vectors of pairs

    vector<pair<int,string>> v3;

    v3.push_back(make_pair(2,"Krishna"));

    printPairVec(v3);


    
}