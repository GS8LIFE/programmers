#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
	int Max_num = number.size();
	int k = 2;
	for (int i = 0; i < Max_num - 2 ; i++) // 최대 크기의 -2 만큼 반복    이전 for문의 초기화 변수를 더하여 중복 발생 방지
	{  // ex) {1,2,3} {1,2,4} {1,2,5} -> {1,3,4} {1,3,5} .... 초기화 변수를 이와같이 하지 않으면 {1,3,2} 같은 예외상황 발생함.
		for (int j = i + 1; j < Max_num - 1 ; j++) // 최대 크기의 -1만큼 반복
		{
			
			for (int k = j + 1; k < Max_num; k++)  // 최대 크기만큼 반복
			{
				if (number[i] + number[j] + number[k] == 0) 
				{
					answer++;
				}
				else
				{

				}
			}
		}
	}

    return answer;
}