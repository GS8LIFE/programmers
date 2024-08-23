#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;

    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a')
        {
            str[i] -= 32;
        }
        else if('A' <= str[i] <='Z')
        {
            str[i] += 32;
        }
    }

    cout << str << endl;
    return 0;
}