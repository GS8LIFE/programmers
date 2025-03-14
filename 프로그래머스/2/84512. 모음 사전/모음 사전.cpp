#include <iostream>
#include <string>
using namespace std;

int solution(string word)
{
    int answer = 0;
    string temp = "";

    for (int i = 1; i <= 5; i++) // 1글자
    {
        char letter1;
        switch (i)
        {
        case 1: letter1 = 'A';
            break;
        case 2: letter1 = 'E';
            break;
        case 3: letter1 = 'I'; 
            break;
        case 4: letter1 = 'O';
            break;
        case 5: letter1 = 'U'; 
            break;
        default: break;
        }
        temp.push_back(letter1);
        answer++;
        if (temp == word) return answer;


        for (int j = 1; j <= 5; j++)// 2글자
        {
            char letter2;
            switch (j)
            {
            case 1: letter2 = 'A';
                break;
            case 2: letter2 = 'E'; 
                break;
            case 3: letter2 = 'I'; 
                break;
            case 4: letter2 = 'O'; 
                break;
            case 5: letter2 = 'U';
                break;
            default: break;
            }
            temp.push_back(letter2);
            answer++;
            if (temp == word) return answer;


            for (int k = 1; k <= 5; k++)//3글자
            {
                char letter3;
                switch (k)
                {
                case 1: letter3 = 'A';
                    break;
                case 2: letter3 = 'E'; 
                    break;
                case 3: letter3 = 'I'; 
                    break;
                case 4: letter3 = 'O'; 
                    break;
                case 5: letter3 = 'U'; 
                    break;
                default: break;
                }
                temp.push_back(letter3);
                answer++;
                if (temp == word) return answer;


                for (int q = 1; q <= 5; q++)// 4글자
                {
                    char letter4;
                    switch (q)
                    {
                    case 1: letter4 = 'A';
                        break;
                    case 2: letter4 = 'E';
                        break;
                    case 3: letter4 = 'I'; 
                        break;
                    case 4: letter4 = 'O'; 
                        break;
                    case 5: letter4 = 'U'; 
                        break;
                    default: break;
                    }
                    temp.push_back(letter4);
                    answer++;
                    if (temp == word) return answer;


                    for (int w = 1; w <= 5; w++)//5글자
                    {
                        char letter5;
                        switch (w)
                        {
                        case 1: letter5 = 'A';
                            break;
                        case 2: letter5 = 'E'; 
                            break;
                        case 3: letter5 = 'I'; 
                            break;
                        case 4: letter5 = 'O';
                            break;
                        case 5: letter5 = 'U'; 
                            break;
                        default: break;
                        }
                        temp.push_back(letter5);
                        answer++;
                        if (temp == word) return answer;
                        temp.pop_back();
                    }
                    temp.pop_back();
                }
                temp.pop_back();
            }
            temp.pop_back();
        }
        temp.pop_back();
    }
    return answer;
}