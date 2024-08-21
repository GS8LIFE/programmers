#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int CutSize = 0;
    int Bigger = 0;
    int counter = 0;
    CutSize = p.length();
    int forsize = t.length() - CutSize + 1;
    for (size_t i = 0; i < forsize; i++)
    {

        counter++;
        string a = t.substr(i, CutSize);
        if (stoll(p) >= stoll(a))
        {
            answer++;
        }
    }
    
    return answer;
}