// Link - https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
// Chocolate Distribution Problem


class Solution{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());
    int i = 0, j = m - 1;
    long long diff = a[j] - a[i];
    i++;
    j++;
    while (j < n) {
        if (a[j] - a[i] < diff) {
            diff = a[j] - a[i];
        }
        i++;
        j++;
    }
    return diff;
    }
};