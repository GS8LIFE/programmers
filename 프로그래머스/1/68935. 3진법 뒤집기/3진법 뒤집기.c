#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

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

long long solution(long long n)
{
    long long answer = 0;
    n = base10_to_base3(n);
    n = swap_num(n);
    answer = base3tobase10(n);

    return answer;
}
