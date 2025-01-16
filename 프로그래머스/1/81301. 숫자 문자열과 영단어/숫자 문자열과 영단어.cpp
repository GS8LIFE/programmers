#include <string>
#include <vector>

using namespace std;

#include <unordered_map>

using namespace std;

long long solution(string s) 
{
    unordered_map<string, char> num_map = 
    {
        {"zero", '0'}, {"one", '1'}, {"two", '2'}, {"three", '3'}, {"four", '4'},
        {"five", '5'}, {"six", '6'}, {"seven", '7'}, {"eight", '8'}, {"nine", '9'}
    };
    
    for(auto &pair : num_map)
    {
        size_t pos = 0;
        while((pos = s.find(pair.first, pos)) != string::npos){
            s.replace(pos, pair.first.length(), string(1, pair.second));
            pos += 1;
        }
    }
    
    return stoll(s);
}