#include <iostream>
#include <vector>

using namespace std;
int main() {
    int amount = 11;
    vector<int> coins {1, 2, 5};

    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;


    for (int i = 1; i <= dp.size(); i++) {
        for (int j = 0; j < coins.size(); j++) {
            if (coins[j] <= i) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    cout << dp[amount];
}
