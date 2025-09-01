// Given a positive integer num, return true if num is a perfect square or false otherwise.

// A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

// You must not use any built-in library function, such as sqrt.

// Example 1:

// Input: num = 16
// Output: true
// Explanation: We return true because 4 * 4 = 16 and 4 is an integer.
// Example 2:

// Input: num = 14
// Output: false
// Explanation: We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.
 
// Constraints:
// 1 <= num <= 231 - 1


class Solution {
public:
    bool isPerfectSquare(int num) {
        int x=num;
        int lo=0; int hi=x;
        // perfect sq. 0 se num ke bich hoga num ka
        // agar ham mid nikale usko multiply kare ussi se toh === num toh voh perfect square

        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            long long m = (long long)mid;
            long long y = (long long)x;
            if(m*m == y) return true;
            else if (m*m>y) hi=m-1;
            else lo=m+1;
        }
        return false;
    }
};