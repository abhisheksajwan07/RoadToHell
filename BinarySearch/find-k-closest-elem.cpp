// // Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.
// // An integer a is closer to x than an integer b if:

// // |a - x| < |b - x|, or
// // |a - x| == |b - x| and a < b
 
// // Example 1:

// // Input: arr = [1,2,3,4,5], k = 4, x = 3

// // Output: [1,2,3,4]

// // Example 2:

// // Input: arr = [1,1,2,3,4,5], k = 4, x = -1

// // Output: [1,1,2,3]

// // Constraints:

// // 1 <= k <= arr.length
// // 1 <= arr.length <= 104
// // arr is sorted in ascending order.
// // -104 <= arr[i], x <= 104


// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

// An integer a is closer to x than an integer b if:

// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b
 

// Example 1:

// Input: arr = [1,2,3,4,5], k = 4, x = 3

// Output: [1,2,3,4]

// Example 2:

// Input: arr = [1,1,2,3,4,5], k = 4, x = -1

// Output: [1,1,2,3]

 

// Constraints:

// 1 <= k <= arr.length
// 1 <= arr.length <= 104
// arr is sorted in ascending order.
// -104 <= arr[i], x <= 104



class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int>ans(k); // [0,0,0,0]
        if(x<arr[0]){
            for(int i=0;i<k;i++){
                ans[i]=arr[i];

            }
            return ans;
        }
        if(x>arr[n-1]){
            int i = n-1; // i=4
            int j=k-1; // j=3
            while(j>=0){
                ans[j]= arr[i];  // arr = [2,3,4,5]  ans=[2,3,4,5]
                i--;
                j--;

            }
            return ans;
        }
        int mid=-1;
        int lo=0; int hi=n-1;
        bool flag=false; int t=0;// index of ans vector
    
        while(lo<=hi){
            mid = lo+(hi-lo)/2;
            if(arr[mid]==x){
                flag=true;
                ans[t]=arr[mid];
                t++;
                break;

            }
            else if(arr[mid]>x) hi=mid-1;
            else lo=mid+1;
        }
        // if mid not found

        int lb=hi; // hi when less than lo hojata toh vohi tab lb banega
        int ub=lo;

        if(flag==true){
            lb = mid-1;
            ub=mid+1;
        }
         while(t<k && lb>=0 && ub<=n-1){
                int d1 = abs(x-arr[lb]);
                int d2 = abs(x-arr[ub]);
                if(d2>=d1){
                    // tum lb ko daloge aur lb-- karte jaoge
                    ans[t] = arr[lb];
                    lb--;
                }
                else {
                    // d1>d2 toh ub daaloge kyuki closest daalna chota elem
                    ans[t]= arr[ub];
                    ub++;
                }
                t++;
            }
        if(lb<0){
            while(t<k){
                ans[t]=arr[ub];
                ub++;
                t++;

            }
        }
        if(ub>n-1){
            while(t<k){
                ans[t]= arr[lb];
                lb--;
                t++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

