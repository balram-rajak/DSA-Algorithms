

Stack<Integer> stack = new Stack<>();

// void print(vector<int> v){
//     cout<< "size:" << v.size() << endl;
//     for(int i =0; i<v.size(); i++){
        
//         cout << v[i] << " ";
//     }
//     cout<< endl;
// }


public int[] nextGreaterElements(int[] nums) {

    int[] res = new int[nums.length];
    for(int i=0;i<nums.length;i++) {
        while(!stack.isEmpty() && nums[stack.peek()] < nums[i]) {
            res[stack.pop()] = nums[i];
        }
        stack.push(i);
    }
    
    for(int i=0;i<nums.length;i++) {
        while(!stack.isEmpty() && nums[stack.peek()] < nums[i]) {
            res[stack.pop()] = nums[i];
        }
    }

    while(!stack.isEmpty()) {
        res[stack.pop()] = -1;
    }
    return res;
}

public static void main(){

    
    // int n;
    // cin>> n;
    // while(!cin.fail()){
        
    //     vector<int> v;
    //     int temp;

    //     for(int i =0; i<n; i++){
            
    //         cin >> temp;
    //         v.push_back(temp);
    //     }

    //     print(nextGreaterElements(v));
    //     cin >> n;
    // }
}