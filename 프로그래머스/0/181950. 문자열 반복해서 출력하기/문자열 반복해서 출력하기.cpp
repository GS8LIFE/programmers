#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    int n;
    cin >> str >> n;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < str.length();j++)
        {
            cout << str[j];
        }
    }
    return 0;
}