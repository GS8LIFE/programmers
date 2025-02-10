using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long temp = money;
    for (int i = 1; i <= count; i++)
    {
        temp = temp - (price * i);
    }
    if (temp < 0)
    {
        answer = temp * (-1);
    }
    else
    answer = 0;

    return answer;
}