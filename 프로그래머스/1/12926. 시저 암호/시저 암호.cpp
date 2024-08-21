#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";

	for (size_t i = 0; i < s.length(); i++)
	{
		if (s[i] == 32)
		{
			continue;
		}
		if (s[i] <= 90)
		{
			if (s[i] + n > 90)
			{
				s[i] += n - 26;
			}
			else
			{
				s[i] += n;
			}
		}

		if (s[i] >= 97)
		{
			if (s[i] + n > 122)
			{
				s[i] += n - 26;
			}
			else
			{
				s[i] += n;
			}
		}
	}

	answer = s;
    return answer;
}