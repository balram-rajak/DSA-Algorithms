
using namespace std;

int maxFrequency(vector<int>& nums, int k) {
        
    int sz = size(nums);
    sort(nums.begin(), nums.end());

    int maxFreq = 1;
    for(int i =sz-1; i>0; i--){

        int op = k;
        int tempf = 1;
        for(int j=i-1; j>-1; j--){

            // cout << "i:" << i << " j:" << j << endl;
            int temp = nums[i] - nums[j];
            if(temp <= op){
                op = op - temp;
                tempf++;
            }
        }

        maxFreq = max(tempf,maxFreq);
    }

    return maxFreq;
}

int main(){

    int T;

    cin >> T;
    while(T--){

        int sz, k ;

        cin >> sz >> k;

        // cout<< "sz:" << sz << endl;
        vector<int> arr;

        int temp;

        while(sz--){
           cin >> temp;
           arr.push_back(temp);
        }

        cout << maxFrequency(arr,k) << endl;

    }
}
