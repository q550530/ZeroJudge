#include <iostream>


using namespace std;

int main()
{
	int iNum, iTime=0;

	cin >> iNum;
	
	for (int i = 2; i<=iNum; i++)
	{
		while (iNum%i == 0)
		{
			iNum /= i;
			iTime++;
		}

		if (iTime>1){
			cout << i << "^" << iTime;
		}
		else if (iTime == 1){
			cout << i;
		}
		if (iNum==1)
		{
			cout <<endl;
		}
		else if(iNum%i!=0 && iTime>=1)
		{
			cout << " * ";

		}
		
		if (iNum == i&& iTime==0)
			cout << iNum << endl;
		iTime = 0;
		

	}

	
	return 0;
}