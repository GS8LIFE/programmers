#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int Loop = sizes.size();
    bool CheckX = false;
    bool CheckY = false;

    vector<int> Size_X;
    vector<int> Size_Y;

    for (int i = 0; i < Loop; i++) {
        Size_X.push_back(max(sizes[i][0], sizes[i][1]));
        Size_Y.push_back(min(sizes[i][0], sizes[i][1]));
    }

    sort(Size_X.begin(), Size_X.end());
    sort(Size_Y.begin(), Size_Y.end());

    int X = Size_X.back();
    int Y = Size_Y.back();

    while (!(CheckX && CheckY)) {
        for (int i = 0; i < Loop; i++) {
            if (sizes[i][0] > X && sizes[i][1] > X) {
                X = max(sizes[i][0], sizes[i][1]);
                CheckX = false;
                break;
            }
            else if (sizes[i][0] > Y && sizes[i][1] > Y) {
                Y = max(sizes[i][0], sizes[i][1]);
                CheckY = false;
                break;
            }
        }
        CheckX = true;
        CheckY = true;
    }

    answer = X * Y;
    return answer;
}
