#include <iostream>

using namespace std;
int main()
{
    int m, d;

    cin >> m >> d;

    int s = (m * 2 + d) % 3;

    cout << (s == 0 ? "普通" : s == 1 ? "吉" : "大吉") << endl;
}