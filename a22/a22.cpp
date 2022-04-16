#include <iostream>
#include <string> 

using namespace std;

int main()
{

	string x;
	while (cin >> x)
	{
		bool n = true;
		for (int i = 0; i < x.length() / 2; i++)
		{
			if (x[i] != x[x.length() - 1 - i])
			{
				n = false;
				break;
			}
		}
		cout << (n ? "yes" : "no") << endl;
	}
}