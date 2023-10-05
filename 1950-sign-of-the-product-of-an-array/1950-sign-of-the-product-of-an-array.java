class Solution {
    public int arraySign(int[] nums) {
         int length=nums.length;
        double check=1;
        for(int i=0;i<length;i++){
            check*=nums[i];
        }
        if(check>0){
            return 1;
        }
        else if(check<0){
            return -1;
        }
        else{
            return 0;
        }
    }
}