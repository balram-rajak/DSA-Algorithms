// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1

using namespace std;


void print(vector<auto>& arr){

    for(auto ele : arr) cout<< ele << " ";
    cout<< endl;
}

int removeDuplicates(vector<int>& nums) {
    
    int l=0;

    for(int i=1; i<nums.size(); i++){
        if(nums[i] != nums[l]) {
            ++l;
            nums[l] = nums[i]; 
        }
    }

    return ++l;
}


int main(){

    int T;

    cin >> T;
    while(T--){

        int sz;

        cin >> sz;

        vector<int> arr;

        int temp;

        while(sz--){
           cin >> temp;
           arr.push_back(temp);
        }
        
        // print(arr);
        temp = removeDuplicates(arr);
        cout <<  temp << endl;

        print(arr);
    }
}