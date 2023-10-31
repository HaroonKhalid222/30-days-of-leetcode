class Solution {
    public int findDuplicate(int[] nums) {
        Arrays.sort(nums); // Sort the array
        int size=nums.length;
        for(int i=0;i<=size;i++){
            if(nums[i+1]==nums[i]){
                return nums[i];
            }
        }
        return 0;
    }
}