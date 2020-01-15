#include <iostream>
#include <vector>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {


        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {

                if(i == 0) {
                    if (j == 0) continue;

                    else {
                        grid[i][j] += grid[i][j - 1];
                        continue;
                    }
                }

                if (j == 0) {
                    grid[i][j] += grid[i - 1][j];
                } else {
                    grid[i][j] += min(grid[i][j - 1], grid[i - 1][j]);
                }
            }
        }

        return grid.at(grid.size() - 1).at(grid.at(0).size() - 1);
    }

int uniquePaths(int m, int n) {
    vector<vector<int>> grid (m, vector<int> (n, 0));

    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid.at(0).size(); ++j) {

            if (i == 0) {
                grid[i][j] = 1;
                continue;
            }

            if (j == 0) {
                grid[i][j] = 1;
                continue;
            } else {
                grid[i][j] += grid[i - 1][j] + grid[i][j - 1];
                continue;
            }

        }
    }

    return grid.at(grid.size() - 1).at(grid.at(0).size() - 1);
}

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

    for(int i = 0; i < obstacleGrid.size(); i++) {
        for(int j = 0; j < obstacleGrid.at(0).size(); j++) {

            if (i == 0) {
                if (j == 0 && obstacleGrid[i][j] != 1) {
                    obstacleGrid[i][j] = 1;
                    continue;
                } else if (j == 0 && obstacleGrid[i][j] == 1) {
                    obstacleGrid[i][j] = 0;
                    continue;
                } else if (j != 0){
                    obstacleGrid[i][j] = obstacleGrid[i][j - 1];
                    continue;
                }
            } else {
                if (j == 0 && obstacleGrid[i][j] == 1) {
                    obstacleGrid[i][j] = 0;
                    continue;
                } else if (j == 0 && obstacleGrid[i][j] != 1) {
                    obstacleGrid[i][j] = 1;
                    continue;
                } else {
                    if (obstacleGrid[i][j] == 1) {
                        obstacleGrid[i][j] = 0;
                        continue;
                    } else {
                        obstacleGrid[i][j] = obstacleGrid[i][j - 1] + obstacleGrid[i - 1][j];
                        continue;
                    }
                }
            }
        }
    }
    return obstacleGrid[obstacleGrid.size() - 1][obstacleGrid.at(0).size() - 1];
}


int main() {

    vector<vector<int>> grid {{0,0,0},
                              {0,1,0},
                              {0,0,0}};

    cout << uniquePathsWithObstacles(grid) << endl;
    cout << "Hello";
}