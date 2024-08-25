class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
     int n = circles.size(); // Get the number of circles
    set<pair<int, int>> st; // A set to store unique lattice points (x, y)

    // Iterate through each circle
    for(int i = 0; i < n; i++) {
        int a = circles[i][0]; // x-coordinate of the circle's center
        int b = circles[i][1]; // y-coordinate of the circle's center
        int r = circles[i][2]; // Radius of the circle

        // Iterate through all points in the square bounding the circle
        for(int x = -r; x <= r; x++) {
            for(int y = -r; y <= r; y++) {
                // Check if the point (x, y) lies within or on the boundary of the circle
                if((x * x) + (y * y) <= (r * r)) {
                    // Adjust the point to the circle's center and insert it into the set
                    st.insert({x + a, y + b});
                }
            }
        }
    }

    // The size of the set gives the number of unique lattice points covered by the circles
    return st.size();
    }
};