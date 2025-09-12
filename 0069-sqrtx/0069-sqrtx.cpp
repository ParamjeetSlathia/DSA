class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int left = 1, right = x, ans = 0;
        while (left <= right) {
            long mid = left + (right - left) / 2;
            long sq = mid * mid;

            if (sq == x) return mid;
            else if (sq < x) {
                ans = mid;      // store possible answer
                left = mid + 1; // try bigger numbers
            } else {
                right = mid - 1; // try smaller numbers
            }
        }
        return ans;
    }
};
