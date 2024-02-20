#include <iostream>

class Solution {
public:
    double myPow(double x, int n) {
        if (x == 1) {
            return 1;
        }

        long N = n;
        if (n < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1;
        while (N > 0) {
            if (N % 2 == 1) {
                result *= x;
            }
            x *= x;
            N /= 2;
        }

        return result;
    }
};

int main() {
    Solution solution;

    // Example usage:
    double base = 2.0;
    int exponent = 10;

    double result = solution.myPow(base, exponent);

    std::cout << base << " ^ " << exponent << " = " << result << std::endl;

    return 0;
}
