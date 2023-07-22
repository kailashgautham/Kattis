#include<bits/stdc++.h>
using namespace std;

void checkBelow(vector<vector<char>>& grid, int i, int j) {
    if(grid[i][j] == 'V' && i < grid.size() - 1 && grid[i+1][j] == '.') grid[i+1][j] = 'V';
}

void checkLeftRight(vector<vector<char>>& grid, int i, int j) {
    if (grid[i][j] == 'V' && i < grid.size() - 1 && grid[i + 1][j] == '#') {
        if (j > 0 && grid[i][j-1] == '.') {
            grid[i][j-1] = 'V';
            checkBelow(grid, i, j-1);
            checkLeftRight(grid, i, j-1);
        }
        if (j < grid[0].size() && grid[i][j+1] == '.') {
            grid[i][j+1] = 'V';
            checkBelow(grid, i, j+1);
            checkLeftRight(grid, i, j+1);
        }
    }
}

int fontan() {
    int n, m;
    cin >> n >> m;
    char c;
    vector<vector<char>> grid;
    for (int i = 0; i < n; i++) {
        vector<char> row;
        for (int j = 0; j < m; j++) {
            cin >> c;
            row.push_back(c);
        }
        grid.push_back(row);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            checkBelow(grid, i, j);
            checkLeftRight(grid, i, j);
        }
    }
    cout << endl;
    for (vector<char> v: grid) {
        for (char c: v) cout << c;
        cout << endl;
    }
}