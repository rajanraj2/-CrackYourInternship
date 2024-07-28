// Link - https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1
// Smallest Positive Missing Number


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        
        for (int i = 0; i < n; i++) {
            while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
                swap(arr[i], arr[arr[i] - 1]);
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                return i + 1;
            }
        }
        
        return n + 1;
    } 
    
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};