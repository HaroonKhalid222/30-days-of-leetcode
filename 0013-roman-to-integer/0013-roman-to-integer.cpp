class Solution {
public:
    int romanToInt(string s) {
    unordered_map<char, int> roman_to_int{
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    
    int result = 0, prev = 0;
    
    for (char c : s) {
        int current = roman_to_int[c];
        result += (current > prev) ? (current - 2 * prev) : current;
        prev = current;
    }
    
    return result;
}
};