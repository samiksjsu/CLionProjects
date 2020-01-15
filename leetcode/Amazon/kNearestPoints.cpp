//
// Created by Samik Biswas on 04-11-2019.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <map>

using namespace std;

vector<pair<int, int>> kNearest() {
    //Amazon code for nearest distance
    int arr[3][2] = {{1,2}, {2,4}, {4,3}};

    vector<vector<int>> loc;

    for (int j = 0; j < 3; ++j) {
        vector<int> temp;
        temp.push_back(arr[j][0]);
        temp.push_back(arr[j][1]);
        loc.push_back(temp);
    }

    int truckCapacity = 2;
    map<int, vector<int>> distances;

    for(auto i : loc) {
        int dist = pow(i.at(0), 2) + pow(i.at(1), 2);
        distances.insert(pair<int, vector<int>>(dist, i));
    }

    vector<pair<int, int>> result;

    auto itr = distances.begin();
    int count = 0;

    while(count < truckCapacity) {
        pair<int, int> mypair;
        mypair.first = itr->second.at(0);
        mypair.second = itr->second.at(1);
        result.push_back(mypair);
        itr++;
        count++;
    }


    cout << "hello";
}