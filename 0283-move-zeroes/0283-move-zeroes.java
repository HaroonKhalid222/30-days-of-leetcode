class Solution {
    public void moveZeroes(int[] nums) {
        int nonZeroIndex = 0;

    // Iterate through the array
    for (int i = 0; i < nums.length; i++) {
        if (nums[i] != 0) {
            // Swap the non-zero element with the element at nonZeroIndex
            int temp = nums[i];
            nums[i] = nums[nonZeroIndex];
            nums[nonZeroIndex] = temp;
            nonZeroIndex++;
        }
    }
}
}