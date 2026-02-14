
// Find next greater element of all elment in an array from left -> right
// #include<bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> &lst){

    vector<int> ans(lst.size(),-1);
    stack<int> s;
    for(int i = 0; i< lst.size(); i++){

        while(!s.empty() && lst[i] > lst[s.top()] )
        {
            ans[s.top()] = lst[i];
            s.pop();
        }
        s.push(i);
    }

    // while(!s.empty()){
    //     m[s.top()] = -1;
    //     // cout<<m[s.top()];
    //     s.pop();
    // }

    return ans;
}

int main(){
    int N;
    cin >> N;

    while(!cin.fail()){
        
        vector<int> v;
        int temp;

        for(int i=0; i<N; i++ ){
            cin>> temp;

            v.push_back(temp);
        }

        vector<int> m = NGE(v);

        for(int i=0; i<N; i++){
            cout<< m[i] << " ";
        }

        cin>>N;
        cout<<endl;
    }


}