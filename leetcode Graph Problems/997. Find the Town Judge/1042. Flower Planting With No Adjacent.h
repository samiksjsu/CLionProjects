//
// Created by samik on 12/27/2019.
//

#ifndef INC_997__FIND_THE_TOWN_JUDGE_1042_FLOWER_PLANTING_WITH_NO_ADJACENT_H
#define INC_997__FIND_THE_TOWN_JUDGE_1042_FLOWER_PLANTING_WITH_NO_ADJACENT_H

#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {

    vector<int> res(N);
    unordered_map<int, unordered_set <int>> G;

    for (vector<int>& p : paths) {
        G[p[0] - 1].insert(p[1] - 1);
        G[p[1] - 1].insert(p[0] - 1);
    }

    for (int i = 0; i < N; ++i) {
        int colors[5] = {};
        for (int j : G[i])
            colors[res[j]] = 1;
        for (int c = 4; c > 0; --c)
            if (!colors[c])
                res[i] = c;
    }

    return res;
}
#endif //INC_997__FIND_THE_TOWN_JUDGE_1042_FLOWER_PLANTING_WITH_NO_ADJACENT_H
