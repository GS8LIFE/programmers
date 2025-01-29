#include <vector>

using namespace std;

int solution(int number, int limit, int power) 
{
    vector<int> divisor_count(number + 1, 0);
    
    for(int i = 1; i <= number; ++i){
        for(int j = i; j <= number; j += i)
        {
            divisor_count[j]++;
        }
    }
    
    int total_iron = 0;
    for(int i = 1; i <= number; ++i)
    {
        if(divisor_count[i] > limit)
        {
            total_iron += power;
        }
        else{
            total_iron += divisor_count[i];
        }
    }
    
    return total_iron;
}
