// Link - https://leetcode.com/problems/merge-sorted-array/description/
// Merge Sorted Array


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--]; 
            }
            else {
                nums1[k--] = nums2[j--];
            }
        }
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};


// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int left = m - 1;
//         int right = 0;
//         while (left >= 0 && right < n) {
//             if (nums1[left] > nums2[right]) {
//                 swap(nums1[left], nums2[right]);
//                 left--; right++;
//             }
//             else {
//                 break;
//             }
//         }
//         sort(nums1.begin(), nums1.begin() + m);
//         sort(nums2.begin(), nums2.end());
//         for (int i = m + n - 1; i >= m; i--) {
//             nums1[i] = nums2[i - m];
//         }
//     }
// };

