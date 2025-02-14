#include <string>
using namespace std;

int solution(string s) 
{
    int answer = 0;
    int i = 0;
    int n = s.size();
    
    while(i < n) 
    {
        char x = s[i];
        int cnt_x = 0, cnt_other = 0;
        
        // 현재 조각을 결정하는 while문
        while(i < n) {
            if(s[i] == x)
                cnt_x++;
            else
                cnt_other++;
            i++;
            
            // 두 개수가 같아지면 현재 조각 종료
            if(cnt_x == cnt_other)
                break;
        }
        answer++;
    }
    
    return answer;
}
