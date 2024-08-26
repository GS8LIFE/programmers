#include <string>
#include <vector>

using namespace std;


bool ItsHere(string _babbling)
{
    bool a = false;
    vector<string> CanSpeak = { "aya", "ye", "woo", "ma" };

    for (int i = 0; i < CanSpeak.size(); i++)
    {
        for (int j = 0; j < CanSpeak[i].size(); j++)
        {
            if (_babbling[j] != CanSpeak[i][j])
            {
                a = false;
                break;
            }
            a = true;
        }
        if (a)
        {
            _babbling.erase(0, CanSpeak[i].size());
            CanSpeak.erase(CanSpeak.begin() + i);
            i = -1;
        }
    }
    if (_babbling.size() != 0)
    {
        return false;
    }
    return true;
}
int solution(vector<string> babbling) {
    int answer = 0;


        for (int i = 0; i < babbling.size(); i++)
        {
            if (ItsHere(babbling[i]))
            {
                answer++;
            }
        }
    return answer;
}