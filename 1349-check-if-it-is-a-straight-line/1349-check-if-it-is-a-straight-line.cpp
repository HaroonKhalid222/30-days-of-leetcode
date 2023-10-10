class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() <= 2) {
        return true; //First case: Any two points or less are always collinear
    } 
    int x0 = coordinates[0][0];
    int y0 = coordinates[0][1];
    int x1 = coordinates[1][0];
    int y1 = coordinates[1][1];
    for (int i = 2; i < coordinates.size(); ++i) {
        int x2 = coordinates[i][0];
        int y2 = coordinates[i][1];
        
        if ((y1 - y0) * (x2 - x0) != (y2 - y0) * (x1 - x0)) {
            return false; //Secondcase: Not all points are collinear
        }
    }
    return true; //Third case:  All points are collinear

    }
};