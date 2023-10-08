class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        for (int i = left; i <= right; ++i) {
            int n = i;
            while (n > 0) {
            int digit = n % 10;
            if (digit == 0 || i % digit != 0) {
                break;
            }
            n /= 10;
        }
        if (n == 0) {
            answer.push_back(i);
        }
    }
    return answer;
    }
};