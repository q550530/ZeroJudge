#include <stdio.h>
#include <iostream>

using namespace std;

int main () {

int n=0;


while(cin>>n)
{
	if (n%4!=0 or (n%100==0 and n%400!=0))
		cout << "平年" << "\n";

	if ((n%4==0 and n%100!=0) or n%400==0)
		cout << "閏年" << "\n";

}
return 0;
}