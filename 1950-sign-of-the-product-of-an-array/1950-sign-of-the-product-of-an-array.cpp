class Solution {
public:
    int arraySign(vector<int>& nums) {
        float check=1;
        for(int i=0;i<nums.size();i++){
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
};