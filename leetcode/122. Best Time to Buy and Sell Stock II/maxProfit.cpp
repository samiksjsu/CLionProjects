//
// Created by Samik Biswas on 16-10-2019.
//

#include "maxProfit.h"

int maxProfit(vector<int>& prices1){
    vector<int> prices {7,1,5,3,6,4};
    int size = prices.size();


    int low = prices.at(0);
    int high = prices.at(0);
    int profit = 0;
    int totalProfit = 0;

    for (int i = 0; i < size; ++i) {
        if (prices.at(i) < low){
            low = prices.at(i);
        }
        else if (prices.at(i) > low) {
            high = prices.at(i);

            if (high - low > profit) {
                profit = high - low;
            }
        }
    }
    return profit;
}