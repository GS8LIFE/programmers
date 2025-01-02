#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    vector<string> pattern = {"수", "박"};
    string result;

    for (int i = 0; i < n; ++i) {
        result += pattern[i % 2]; // 짝수는 "수", 홀수는 "박"
    }

    return result;
}