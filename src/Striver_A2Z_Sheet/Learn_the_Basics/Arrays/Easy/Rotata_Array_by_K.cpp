// https://leetcode.com/problems/rotate-array/submissions/1918609968/
// https://www.geeksforgeeks.org/problems/quick-left-rotation3806/1
// https://www.codingninjas.com/codestudio/problems/left-rotate-an-array-by-one_5026278
// O(n+k)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        
        if (k> n)
            k %= n;

        if (k == 0 | k == n )
            return;

        vector<int> rotate;

        for (int i = 0; i < k; i++) {

            rotate.push_back(nums[i + n - k]);
        }

        for (int i = 0; i < n - k; i++) {

            nums[n - 1 - i] = nums[n - k - 1 - i];
        }

        for (int i = 0; i < k; i++) {

            nums[i] = rotate[i];
        }
    }
};