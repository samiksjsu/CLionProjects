//
// Created by Samik Biswas on 29-10-2019.
//

#include "kClosest.h"
#include <cmath>
#include <map>
#include <set>
#include <algorithm>

vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {


    int size = points.size();
    multimap<double, int> m;

    for (int i = 0; i < size; ++i) {

        int x1 = points[i][0];
        int y1 = points[i][1];

        double distance = sqrt((x1 * x1) + (y1 * y1));



        m.insert(pair<double, int> (distance, i));
    }

    auto itr = m.begin();
    int count = 0;
    vector<vector<int>> result;

    while (count < K) {
        result.push_back(points.at(itr->second));
        count++;
        itr++;
    }

    return result;
}

