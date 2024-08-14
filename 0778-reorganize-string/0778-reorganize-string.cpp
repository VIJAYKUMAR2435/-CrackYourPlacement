class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    
    // Max-heap to store characters by their frequency
    priority_queue<pair<int, char>> pq;
    for (auto& [ch, count] : freq) {
        pq.push({count, ch});
    }

    string result = "";
    pair<int, char> prev = {-1, '#'}; // To store the last placed character

    while (!pq.empty()) {
        auto [count, ch] = pq.top();
        pq.pop();
        
        result += ch;

        // Re-add the previous character back if it still has remaining frequency
        if (prev.first > 0) {
            pq.push(prev);
        }

        // Update the previous character and its frequency
        prev = {count - 1, ch};
    }

    // If the reorganized string length is not equal to the original, return an empty string
    if (result.size() != s.size()) {
        return "";
    }

    return result;
        }
    
};