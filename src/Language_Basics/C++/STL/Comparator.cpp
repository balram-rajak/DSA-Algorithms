using namespace std;

bool comparatorFn(pair<string,int> a, pair<string,int> b){
    
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}
int main(){

    int n;
    cin>> n;

    vector<pair<string, int>> v;

    while(n--){

        string first;
        int second;
        cin>> first;
        cin>> second;
        v.push_back({first, second});
    }

    sort(v.begin(), v.end(),comparatorFn);

    for(auto &e : v){
        cout<< e.first << " " << e.second << endl;
    }
}