#include <string>
#include <vector>

using namespace std;

int SumNames(vector<vector<string>> photo, vector<string> name, vector<int> yearning,int _I)
{
    int sum = 0;
    for (size_t i = 0; i < name.size(); i++)
    {
        for (size_t j = 0; j < photo[_I].size(); j++)
        {
            if (name[i] == photo[_I][j])
            {
                sum += yearning[i];
            }
        }
    }
    return sum;
}

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    int sum = 0;
    vector<int> answer;
    for (size_t i = 0; i < photo.size(); i++)
    {
        sum = (SumNames(photo, name, yearning,i));
        answer.push_back(sum);
        sum = 0;
    }
    
    return answer;
}