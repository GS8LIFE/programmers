#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> ingredient) 
{
    int answer = 0;
    vector<int> stack;
    stack.reserve(ingredient.size());

    for (int ing : ingredient) 
    {
        stack.push_back(ing);
        if (stack.size() >= 4)
        {
            int n = stack.size();
            if (stack[n-4] == 1 && stack[n-3] == 2 && stack[n-2] == 3 && stack[n-1] == 1) 
            {
                stack.erase(stack.end()-4, stack.end());
                answer++;
            }
        }
    }

    return answer;
}