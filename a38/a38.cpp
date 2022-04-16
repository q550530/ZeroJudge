#include <iostream>
#include <string> 

using namespace std;


int main()
{
	string x;
	while (cin >> x)
	{
		string y;
		for (int i= x.size()-1; i>=0  ; i--)
		{
			y = y+x[i];
		}
		while (y[0] == '0' && y.length() > 1)
		{
			y.erase(0, 1);
		}

		cout << y << endl;

	}

}