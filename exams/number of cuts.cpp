#include <iostream>
#include <vector>
#include <algorithm>

int minCost(int n, std::vector<int>& cuts) {
    cuts.push_back(0);
    cuts.push_back(n);
    std::sort(cuts.begin(), cuts.end());

    int m = cuts.size();
    std::vector<std::vector<int>> dp(m, std::vector<int>(m, 0));

    for (int len = 2; len < m; len++) {
        for (int i = 0; i + len < m; i++) {
            int j = i + len;
            dp[i][j] = INT_MAX;
            for (int k = i + 1; k < j; k++) {
                dp[i][j] = std::min(dp[i][j], dp[i][k] + dp[k][j] + cuts[j] - cuts[i]);
            }
        }
    }

    return dp[0][m - 1];
}

int main() {
    int n = 6;
    std::vector<int> cuts = {1, 3, 4};

    int result = minCost(n, cuts);
    std::cout << "Minimum total cost of cuts: " << result << std::endl;

    return 0;
}
