class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        for(int j=i;i>=0;j--)
        {
            //last case
            if(digits[i]==9)
            {
                digits[i] = 0;
            }
            else{
               digits[i]++;
                return digits;
            }
            i=i-1;
        }
        //now inserting one for the last case where input is [9]
        digits.insert(digits.begin() , 1);
        return digits;
    }
};