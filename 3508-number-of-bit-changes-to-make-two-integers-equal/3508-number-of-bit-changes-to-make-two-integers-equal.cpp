class Solution {
public:
    int minChanges(int n, int k) {
         // If k has a 1 bit where n has a 0 bit, return -1 because we can't create a 1 from 0.
    if ((n | k) != n) {
        return -1;
    }

    int changes = 0;
    // XOR n and k to find differing bits
    int diff = n ^ k;

    // Count the number of 1 bits in diff, which represent the changes needed
    while (diff > 0) {
        changes += (diff & 1);
        diff >>= 1;
    }

    return changes;
    }
};