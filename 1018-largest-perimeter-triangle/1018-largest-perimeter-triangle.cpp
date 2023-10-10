class Solution {
public:
int largestPerimeter(vector<int>& nums) {
    int n = nums.size();
    if (n < 3) return 0; 
    int maxPerimeter = 0;
    sort(nums.begin(), nums.end()); // Sort in ascending order
    
    for (int i = n - 1; i >= 2; --i) {
        if (nums[i - 2] + nums[i - 1] > nums[i]) {
            return nums[i - 2] + nums[i - 1] + nums[i];
        }
    }
    
    return 0;
}
};