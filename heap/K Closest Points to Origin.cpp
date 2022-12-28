class Solution {
public:
   vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
  // Define a comparison function for sorting the points.
  auto cmp = [&](const vector<int>& p1, const vector<int>& p2) {
    return p1[0] * p1[0] + p1[1] * p1[1] < p2[0] * p2[0] + p2[1] * p2[1];
  };
  // Sort the points using the comparison function.
  sort(points.begin(), points.end(), cmp);
  // Return the first k points.
  return vector<vector<int>>(points.begin(), points.begin() + k);
}

};
