#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

    vector<vector<int>> adj(numCourses, vector<int>());
    vector<int> outDegree (numCourses, 0);
    vector<int> result;

    //if (numCourses == 2 && prerequisites.size() == 0) return vector<int> {1, 0};

    for (auto &i: prerequisites) {
        adj[i[1]].push_back(i[0]);
        outDegree[i[0]]++;
    }

    queue<int> q;

    for (int i = 0; i < outDegree.size(); i++) {
        if (outDegree[i] == 0) {
            q.push(i);
            break;
        }
    }

    while (!q.empty()) {
        int next = q.front(); q.pop(); numCourses--;
        result.push_back(next);
        for(auto i: adj[next]) {
            if (--outDegree[i] == 0) q.push(i);
        }
    }

    return numCourses == 0 ? result : vector<int> {};
}

bool canFinish(int numCourses, vector<vector<int>> &prerequisites) {
    vector<vector<int>> adj(numCourses, vector<int>());
    vector<int> outDegree(numCourses, 0);

    for (auto &i: prerequisites) {
        adj[i[1]].push_back(i[0]);
        outDegree[i[0]]++;
    }

    queue<int> q;

    for (int i = 0; i < numCourses; i++) {
        if (outDegree[i] == 0) q.push(i);
    }

    while (!q.empty()) {
        int next = q.front();
        q.pop();
        numCourses--;

        for (auto i: adj[next]) {
            if (--outDegree[i] == 0) q.push(i);
        }
    }

    return numCourses == 0;
}

int main() {
    int numCourses = 2;
    vector<vector<int>> prerequisites{{0, 1}};

    findOrder(numCourses, prerequisites);
}
