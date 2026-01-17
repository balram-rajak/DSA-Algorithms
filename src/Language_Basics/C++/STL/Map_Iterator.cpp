using namespace std;

void printMap(map<auto, auto> m){
    cout<< m.size() << endl;
    for(auto &p : m){
        cout<< p.first << " " << p.second << endl;
    }
}
int main(){

    map<int, string> m;

    m[3] = "Balram";
    m[1] = "Radhika";
    m[9] = "Madhusudan";
    m.insert({4,"Krishna"});

    printMap(m);

    cout<< m[4] << endl;

    auto it = m.find(7);

    if(it == m.end()) cout<< "Not found" ;
    else cout<< (*it).first << " " << (*it).second << endl;

    // erase
    m.erase(3);

    it = m.find(1);
    m.erase(it);
    
}