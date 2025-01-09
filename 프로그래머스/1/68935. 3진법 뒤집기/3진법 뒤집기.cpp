#include <string>
#include <vector>

using namespace std;

// 10진수를 3진수로 변환하여 숫자로 반환
long long base10_to_base3(long long n)
{
    long long temp = 0;
    long long i = 1;
    bool b = true;
    while (b)
    {
        temp += (n % 3) * i;
        if (n / 3 == 0)
        {
            b = false;
        }
        else
        {
            n = n / 3;
        }
        i = i * 10;
    }
    return temp;
}

// 숫자의 자릿수를 뒤집음
long long swap_num(long long n)
{
    int digit = 0;
    long long reserve = 0;
    while (n > 0)
    {
        digit = n % 10;
        reserve = reserve * 10 + digit;
        n /= 10;
    }
    return reserve;
}

// 3진수 숫자를 다시 10진수로 변환
long long base3tobase10(long long n)
{
    long long result = 0;
    long long power = 1;
    int digit = 0;
    while (n > 0)
    {
        digit = n % 10;
        result += digit * power;
        power *= 3;
        n /= 10;
    }
    return result;
}

// 최종 해결 함수: 10진수 -> 3진수 변환 -> 뒤집기 -> 다시 10진수 변환
int solution(int n)
{
    long long base3 = base10_to_base3(n);
    long long reversed_base3 = swap_num(base3);
    long long answer = base3tobase10(reversed_base3);
    return static_cast<int>(answer);
}
