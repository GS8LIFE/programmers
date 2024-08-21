#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
	double Sum = 0;
	for (size_t i = 0; i < arr.size(); i++)
	{
		Sum += arr[i];
	}
	answer = Sum / arr.size();
    return answer;
}