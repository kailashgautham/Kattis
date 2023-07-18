#include<bits/stdc++.h>
using namespace std;
int parking() {
    int a, b, c, x, y;
    cin >> a >> b >> c;
    int mini = 101;
    int maxi = 0;
    vector<pair<int, int>> intervals;
    for (int i = 0; i < 3; i++) {
        cin >> x >> y;
        pair<int, int> p{x - 1, y + 1};
        intervals.push_back(p);
        mini = min(mini, x);
        maxi = max(maxi, y);
    }
    int oneSeconds = 0;
    int twoSeconds = 0;
    int threeSeconds = 0;
    int currentCount = 0;
    for (int i = mini - 1; i <= maxi + 1; i++) {
        for (int j = 0; j < 3; j++) {
            if (i >= intervals[j].first && i <= intervals[j].second) currentCount++;
        }
        oneSeconds = currentCount == 1 ? oneSeconds + 1 : oneSeconds;
        twoSeconds = currentCount == 2 ? twoSeconds + 1 : twoSeconds;
        threeSeconds = currentCount == 3 ? threeSeconds + 1 : threeSeconds;
        currentCount = 0;
    }

    cout << oneSeconds << endl << twoSeconds << endl << threeSeconds << endl;
    cout << (oneSeconds * a + twoSeconds * b + threeSeconds * c);
}