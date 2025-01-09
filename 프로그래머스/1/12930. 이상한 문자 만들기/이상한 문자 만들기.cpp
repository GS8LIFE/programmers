#include <string>
#include <vector>

using namespace std;


int Asc(char C)
{
    int result = 0;
    if (65 <= C &&C <= 90)
    {
        result = 1;
    }
    else if (97 <= C && C <= 122)
    {
        result = 2;
    }
    else
    {
        result = 0;
    }
    return result;
}

string solution(string s) {
    string answer = "";

    int numlenght = s.length();
    int temp = 0;
    for (int i = 0; i < numlenght; i++)
    {
        if (s[i] != 32)
        {
            if (temp % 2 == 0)
            {
                switch (Asc(s[i]))
                {
                case 1:
                    break;
                case 2:
                    s[i] -= 32;
                default:
                    break;
                }
            }
            else if (temp % 2 == 1)
            {
                switch (Asc(s[i]))
                {
                case 1:
                    s[i] += 32;
                case 2:
                    break;
                default:
                    break;
                }
            }

            temp++;
        }
        else
        {
            temp = 0;
        }
    }
    answer = s;
    return answer;
}

