#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int Time = 0;
    int stack = 0;
    int answer = 0;
    int MaxHp = health;
    bool MonsterAttack = false;
    int LastAttack = attacks.size();
    int AttackCount = 0;


    while (Time <= attacks[LastAttack-1][0])
    {
        if (Time == 0)
        {
            Time++;
            continue;
        }

        for (int i = 0; i < LastAttack; i++)
        {
            if (Time == attacks[i][0])
            {
                MonsterAttack = true;
            }
        }

        if (MonsterAttack)
        {
            health = health - attacks[AttackCount][1];
            Time++;
            MonsterAttack = false;
            AttackCount++;
            stack = 0;
            if (health <= 0)
            {
                health = -1;
                break;
            }
            continue;
        }

        stack++;

        if (stack == bandage[0])
        {
            health = health + bandage[1] + bandage[2];
            stack = 0;
            Time++;

            if (health >= MaxHp)
            {
                health = MaxHp;
            }

            continue;
        }

        health += bandage[1];
        Time++;
        if (health >= MaxHp)
        {
            health = MaxHp;
            continue;
        }
    }

    answer = health;

    return answer;
}