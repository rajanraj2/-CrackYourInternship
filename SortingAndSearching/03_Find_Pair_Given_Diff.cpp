// Link - https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1
// Find pair with given difference


class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        unordered_set<int> mpp;
        for (int i = 0; i < n; i++) {
            int look = arr[i] - x;
            int look2 = arr[i] + x;
            if (mpp.find(look) != mpp.end() || mpp.find(look2) != mpp.end()) {
                return 1;
            }
            mpp.insert(arr[i]);
        }
        return -1;
    }
};