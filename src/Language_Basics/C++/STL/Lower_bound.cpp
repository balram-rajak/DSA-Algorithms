using namespace std;

int main(){

    map<int, string> m;

    m[3] = "Balram";
    m[1] = "Radhika";
    m[9] = "Madhusudan";
    m.insert({4,"Krishna"});

    auto it = m.lower_bound(3);
    if(it != m.end())
        cout<<it->first << " " << it -> second << endl;

    it = m.upper_bound(3);
    if(it !=m.end())
        cout<<it->first << " " << it -> second << endl;
}
