// Monotonic stack
// #include <bits/stdc++.h>

using namespace std;

void print(vector<int> v){
    cout<< "size:" << v.size() << endl;
    for(int i =0; i<v.size(); i++){
        
        cout << v[i] << " ";
    }
    cout<< endl;
}

vector<int> nextGreaterElementsRTL(vector<int>& nums) {

    int n = nums.size();
    vector<int> ans(n,-1);
    
    stack<int> s;
    for(int i=2*n-1; i>=0 ; i--){

        int idx = i%n;

        while(!s.empty() && nums[idx] >= nums[s.top()]){
            s.pop();
            
        }
        if(!s.empty())
        {
            ans[idx] = nums[s.top()];
        }
        s.push(idx);
    }

    return ans;
}

vector<int> nextGreaterElementsLTR(vector<int>& nums) {
    
    int n = nums.size();
    vector<int> ans(n,-1);
    
    stack<int> s;
    for(int i=0; i<2*n ; i++){

        int idx = i%n;

        while(!s.empty() && nums[idx] > nums[s.top()]){
            ans[s.top()] = nums[idx];
            s.pop(); 
        }
        s.push(idx);
    }

    return ans;
}

int main()
{
    int n;
    cin>> n;
    while(!cin.fail()){
        
        vector<int> v;
        int temp;

        for(int i =0; i<n; i++){
            
            cin >> temp;
            v.push_back(temp);
        }

        print(nextGreaterElementsLTR(v));
        cin >> n;
    }
}
