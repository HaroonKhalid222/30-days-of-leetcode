class Solution {
    public String reverseVowels(String s) {
    char[] chars = s.toCharArray();
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // Find the next vowel from the left
        while (left < right && !isVowel(chars[left])) {
            left++;
        }
        // Find the next vowel from the right
        while (left < right && !isVowel(chars[right])) {
            right--;
        }

        // Swap the vowels
        char temp = chars[left];
        chars[left] = chars[right];
        chars[right] = temp;

        // Move the pointers
        left++;
        right--;
    }

    return new String(chars);
}

private boolean isVowel(char c) {
    c = Character.toLowerCase(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}    
}