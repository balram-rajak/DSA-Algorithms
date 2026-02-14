// Power set
// TC = e^n

// It's similar to stacking  



using namespace std;

void print(vector<auto>& arr){

    for(auto &ele : arr) cout<< ele << " ";
    cout<< endl;
}

void print(vector<vector<int>>& arr){

    for(auto &ele : arr) 
    {
        // cout<< ele.size();
        for(auto &in_ele : ele)
        {
            cout<< in_ele << " ";
        }

        cout<< endl;
    }
    cout<< endl;
}

int main(){
    
    // input
    int sz, k ;

    cin >> sz >> k;

    vector<int> arr;

    int temp;

    while(sz--){
        cin >> temp;
        arr.push_back(temp);
    }

    vector<vector<int>> v;

    vector<int> fi;

    v.push_back(fi);

    for(int i=0; i<arr.size(); i++){

        vector<vector<int>> new_v;

        copy(v.begin(),v.end(), back_inserter(new_v));

        for(auto &ele : new_v){

            ele.push_back(arr[i]);
        }

        copy(new_v.begin(),new_v.end(), back_inserter(v));
    }

    print(v);
}


