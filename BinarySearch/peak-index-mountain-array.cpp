// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Your task is to solve it in O(log(n)) time complexity.

// Example 1:
// Input: arr = [0,1,0]

// Output: 1

// Example 2:
// Input: arr = [0,2,1,0]

// Output: 1

// Example 3:
// Input: arr = [0,10,5,2]

// Output: 1

 
// Constraints:
// 3 <= arr.length <= 105
// 0 <= arr[i] <= 106
// arr is guaranteed to be a mountain array.





class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       // 1 3 5 4 3 2 1 0
       int n = arr.size();
       int lo = 1;
       int hi = n-2;
       while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
        else if (arr[mid]>arr[mid+1]) hi = mid-1;
        else lo = mid+1;
      
       } 
       // int mai return karna hota hain
       return lo; // koi bhi return because hamesha peak toh hoga hi ismai
    }
};