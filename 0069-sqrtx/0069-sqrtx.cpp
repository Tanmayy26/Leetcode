class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }

        int low = 1;
        int high = x;
        int result = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long square = mid * mid;

            if (square == x) {
                return mid;
            }

            if (square < x) {
                result = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return result;
    }
};