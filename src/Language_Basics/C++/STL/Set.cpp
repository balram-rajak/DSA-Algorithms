using namespace std;

void printSet(set<string> s){

    for(auto &str : s){
        cout<<str << " ";
    }

    cout<< endl;
}
int main(){

    set<string> s;

    s.insert("ansc");
    s.insert("ngaf");

    auto it = s.find("ansc");
    
    if(it != s.end()) cout<< *it << endl;

    printSet(s);
    
}