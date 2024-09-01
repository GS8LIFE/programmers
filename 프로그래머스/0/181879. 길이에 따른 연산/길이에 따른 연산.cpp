#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;

    int List_Size = num_list.size();
    int Temp = 1;
    if (List_Size <= 10)
    {
        for (size_t i = 0; i < List_Size; i++)
        {
            Temp *= num_list[i];
        }
        answer = Temp;
    }
    else
    {
        for (size_t i = 0; i < List_Size; i++)
        {
            answer += num_list[i];
        }
    }

    return answer;
}