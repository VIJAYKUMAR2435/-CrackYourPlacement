class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }

    // Create a vector of pairs from the map
    vector<pair<char, int>> v(mp.begin(), mp.end());

    // Sort the vector based on the frequency (second) in descending order
    sort(v.begin(), v.end(), [](pair<char, int>& a, pair<char, int>& b) {
        return a.second > b.second;
    });

    // Build the result string
    string result;
    for (auto& p : v) {
        result += string(p.second, p.first);
    }

    return result;
    }
};