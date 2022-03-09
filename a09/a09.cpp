#include <iostream>
#include <string> 

using namespace std;

int main()
{
	string sIn;
	
	getline(cin, sIn);
	for (int i = 0; i < sIn.size(); i++)
	{
		sIn[i]-=7;

	}
	cout << sIn << endl;

	

	return 0;
}