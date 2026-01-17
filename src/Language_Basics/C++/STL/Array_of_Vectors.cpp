#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<int> &v){
    printf("size: %d\n",v.size());
    for(int i =0; i<v.size(); i++){
        cout<<v[i] << " ";
    }
    // for (int x : v) cout << x << ' ';
    // cout << '\n';
    cout<<endl;
}

int main()
{
    int N;
    cin>>N;

    vector<int> v [N];
    for(int i=0; i<N; i++){
        int n;
        cin >> n;
        for(int j=0; j<n; j++){
            int temp;
            cin >> temp;

            v[i].push_back(temp);
        }
    }

    for(int i =0; i<N; i++){
        printVec(v[i]);
    }
}