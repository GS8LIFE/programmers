#include <vector>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int count = 0;
    int last_painted = 0;

    for(auto s : section){
        if(s > last_painted){
            last_painted = s + m -1;
            count++;
        }
    }

    return count;
}
