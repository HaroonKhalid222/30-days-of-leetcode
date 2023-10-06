class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int length=mat.size();
        for(int i=0;i<length;i++){
            sum+=mat[i][i];
            if(i!=mat.size()-i-1) sum+=mat[length-i-1][i];
        }
        return sum;
    }
};