#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c, X1, X2, D, SqrD;
	cin >> a >> b >> c;
	D = (b* b) - ((4 * a)*c);
	SqrD =sqrt(D);

	if (D > 0)
	{
		X1 = (-b + SqrD) / (2 * a);
		X2 = (-b - SqrD) / (2 * a);
		cout << "Two different roots " << "x1=" << X1 << ",x2=" << X2 << endl;
	}
	else if (D == 0)
	{
		X1 = (-b) / (2 * a);
		cout << "Two same roots " << "x=" << X1 <<endl;
	}
	else
	{
		cout << " No real root " << endl;
	}

	


	return 0;
}