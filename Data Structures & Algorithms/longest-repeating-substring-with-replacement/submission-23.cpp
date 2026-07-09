class Solution {
public:
    int characterReplacement(string s, int k) {
    vector<int> counts(26, 0); // Tracks frequencies of letters 'A' through 'Z'
    int left = 0;
    int max_freq = 0; // Highest frequency of any single character in current window
    int max_len = 0;
    
    for (int right = 0; right < s.size(); right++) {
        // Add the current character to our frequency map
        counts[s[right] - 'A']++;
        
        // Keep track of the most frequent character in our current window
        max_freq = max(max_freq, counts[s[right] - 'A']);
        
        // Window length is (right - left + 1)
        // If remaining characters to replace > k, shrink window from left
        while ((right - left + 1) - max_freq > k) {
            counts[s[left] - 'A']--; // Remove left character from map
            left++;                 // Shrink window
        }
        
        // Calculate the maximum valid window seen so far
        max_len = max(max_len, right - left + 1);
    }
    
    return max_len;
}
};
