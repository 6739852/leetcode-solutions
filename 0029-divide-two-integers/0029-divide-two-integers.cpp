class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if (dividend == INT_MIN && divisor == 1)
            return INT_MIN;

        bool negative = (dividend < 0) ^ (divisor < 0);
       
        long long dvd = llabs((long long)dividend);
        long long dvs = llabs((long long)divisor);
        long long result = 0;

        while (dvd >= dvs) {
            long long temp = dvs, multiple = 1;

            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            dvd -= temp;
            result += multiple;
        }

        if (negative) result = -result;

        if (result > INT_MAX) return INT_MAX;
        if (result < INT_MIN) return INT_MIN;

        return (int)result;
    }
};