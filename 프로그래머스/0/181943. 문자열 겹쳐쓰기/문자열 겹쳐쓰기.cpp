#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    for(int i; i < overwrite_string.length();i++)
    {
        my_string[s+i] = overwrite_string[i];
        answer = my_string;
    }
    
    return answer;
}