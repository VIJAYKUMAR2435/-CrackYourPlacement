class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
         unordered_map<string, int> mp;
    for (const string& str : arr) {
        mp[str]++;
    }
    
    vector<string> distinctElements;
    for (const string& str : arr) {
        if (mp[str] == 1) {
            distinctElements.push_back(str);
        }
    }
    
    if (distinctElements.size() < k) {
        return "";
    }
    
    return distinctElements[k - 1];

    }
};