using namespace std;

void printRangeBased(vector<int> &v){
    for(int x : v){
        cout<< x << " ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;

    v={1,4,5,2};
    for(int x : v){
        cout<< x << " ";
        x++; // Increasing the copied element value
    }

    cout<< endl;
    
    // As range based loop is pass by value by default therefore
    // no change in original vector
    printRangeBased(v);
    

    // Selecting by reference
    for(int &x : v){
        cout<< x << " ";
        x++; // Increasing the original elements
    }
    cout<< endl;
    // The values in original array are changed now
    printRangeBased(v);

    // using auto and range based loops
    for(auto &value : v){
        cout<< x << " ";
    }
}