#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int mins = -1;
int fresh = 0;

void helper(vector<vector<int>> &grid, pair<int, int> p, queue<pair<int, int>> &q) {

    int x = p.first;
    int y = p.second;

    if (x - 1 >= 0 && grid[x - 1][y] == 1) {
        q.push({x - 1, y});
        grid[x - 1][y] = 2;
        fresh--;
    }

    if (x + 1 < grid.size() && grid[x + 1][y] == 1) {
        q.push({x + 1, y});
        grid[x + 1][y] = 2;
        fresh--;
    }

    if (y - 1 >= 0 && grid[x][y - 1] == 1) {
        q.push({x, y - 1});
        grid[x][y - 1] = 2;
        fresh--;
    }

    if (y + 1 < grid[0].size() && grid[x][y + 1] == 1) {
        q.push({x, y + 1});
        grid[x][y + 1] = 2;
        fresh--;
    }

}

int orangesRotting(vector<vector<int>> &grid) {

    queue<pair<int, int>> q;


    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {

            // If the orange is rotten put it in the queue
            if (grid[i][j] == 2) {
                q.push(pair<int, int>(i, j));
            } else if (grid[i][j] == 1) {
                fresh++;
            }
        }
    }

    if (fresh == 0) return 0;

    while (!q.empty()) {

        int size = q.size();

        while (size != 0) {
            helper(grid, q.front(), q);
            q.pop();
            size--;
        }

        mins++;
    }

    return mins;
}


int main() {
    vector<vector<int>> grid{{2, 1, 1},
                             {1, 1, 0},
                             {0, 1, 1}};

    cout << orangesRotting(grid) << endl;

    cout << "Hello" << endl;
}
