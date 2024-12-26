#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int current = 0;
    while (!arr.empty())
    {
        current = arr.front();
        if (current % divisor == 0)
        {
            answer.push_back(current);
        }
        arr.erase(arr.begin());
    }

    if (answer.empty())
    {
        answer.push_back(-1);
    }

    sort(answer.begin(), answer.end());
    return answer;
}
