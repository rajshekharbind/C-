#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int minEnergy(int A) {
    if (A == 1) {
        return 0;
    }
    vector<int> dp(A + 1, INT_MAX);
    dp[1] = 0; // Base case: 1 line requires 0 energy

    for (int i = 2; i <= A; ++i) {
        // Option 1: Build up line by line (costly)
        dp[i] = dp[i-1] + 1;

        // Option 2: Check all possible divisors
        for (int d = 1; d * d <= i; ++d) {
            if (i % d == 0) {
                // Divisor d
                if (d < i) {
                    dp[i] = min(dp[i], dp[d] + i / d);
                }
                // Corresponding divisor i/d
                if (i / d < i && i / d != d) {
                    dp[i] = min(dp[i], dp[i / d] + d);
                }
            }
        }
    }
    return dp[A];
}