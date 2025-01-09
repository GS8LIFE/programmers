#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}

vector<int> solution(int n, int m) 
{
    int gcdValue = gcd(n, m);
    int lcmValue = lcm(n, m);
    return {gcdValue, lcmValue};
}