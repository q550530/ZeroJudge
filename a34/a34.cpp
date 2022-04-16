#include <iostream>
#include <string> 

using namespace std;


int main()
{
	int x;
	while (cin >> x)
	{
		string a;
		for (x; x > 0; x /= 2)
		{
			a = to_string(x % 2) + a;
		}
		cout << a << endl;

	}

}
