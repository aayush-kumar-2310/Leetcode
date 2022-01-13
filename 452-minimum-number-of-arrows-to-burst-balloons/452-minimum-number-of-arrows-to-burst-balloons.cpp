class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        if (points.size() == 0) return 0;
        int left = points[0][0], right = points[0][1];
        int ret = 1;
        int i = 1;
        while (i < points.size()) {
            if (right >= points[i][0]) {
                left = max(left, points[i][0]);
                right = min(right, points[i][1]);
            } else {
                left = points[i][0];
                right = points[i][1];
                ret++;
            }
            i++;
        }
        return ret;
    }
};