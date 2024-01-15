#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size()); 

    std::transform(numbers.begin(), numbers.end(), answer.begin(), [](int &i) {
        return 2 * i;
    });

    return answer;
}