using namespace std;

int main(){

    vector<int> v = {2,3,4,5,7};

    // Declaring iterator variable
    vector<int> ::iterator it = v.begin();

    // Works for any kind of container
    for(it = v.begin(); it<v.end(); ++it ){
        cout<< *it << endl;
    }

    // Works only for contiguous locations like vectors
    it=v.begin();
    for(int i =0; i<v.size(); i++){
        cout<< *(it+i) << endl;
    }

    // Iterating through vector of pairs

    vector<pair<int,int>> v1 = {{1,2}, {2,3}, {3,4}};

    vector<pair<int,int>> :: iterator it_p;

    for(it_p = v1.begin(); it_p != v1.end(); it_p++){
        cout<< it_p -> first << " " << it_p -> second << endl;
    }

    // Auto and range based loop combined
    for(auto &it1 : v1){
        cout<<it1.first << " " << it1.second << endl;
    }

}