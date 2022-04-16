#include <iostream>
using namespace std;
int GCD(const int a, const int b) {
	if (a >= b)
		return  a % b == 0 ? b : GCD(b, a % b);
	else
		return  b % a == 0 ? a : GCD(a, b % a);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout<<GCD(a, b);


}