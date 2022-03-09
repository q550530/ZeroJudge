#include <iostream>
#include <string> 
using namespace std;



int iFirst(char fr)
{
	char cAp[26] = {};

	int iFnum[26] = { 0 };

	for (int i = 0; i < 26; i++) ///Sign the first ID
	{
		cAp[i] = char(i + 65);
	}
		
	if (fr == cAp[8])                  // I and O and W
	{
		iFnum[8] = int(cAp[8] - 39);
		return iFnum[8];
		
	}
	else if (fr == cAp[14])
	{
		iFnum[14] = int(cAp[14] - 44);
		return iFnum[14];
	}
	else if (fr == cAp[22])
	{
		iFnum[22] = int(cAp[22] - 55);
		return iFnum[22];
	}
	else if (fr == cAp[25])
	{
		iFnum[25] = int(cAp[25] - 57);
		return iFnum[25];
	}

	for (int i = 0; i < 8; i++)//A-H
	{
		if (fr == cAp[i])
		{
			iFnum[i] = int(cAp[i] - 55);
			return iFnum[i];
			break;
		}

	}
	for (int i = 9; i <= 13; i++) //J-N
	{
		if (fr == cAp[i])
		{
			iFnum[i] = int(cAp[i] - 56);
			return iFnum[i];
			break;
		}

	}
	for (int i = 15; i <= 21; i++)//P-V
	{
		if (fr == cAp[i])
		{
			iFnum[i] = int(cAp[i] - 57);
			return iFnum[i];
			break;
		}

	}
	for (int i = 23; i <= 24; i++)//X-Z
	{
		if (fr == cAp[i])
		{
			iFnum[i] = int(cAp[i] - 58);
			return iFnum[i];
			break;
		}

	}

}
int main()
{
	char cId[10] = {};
	for (int i = 0; i < 10; i++)
	{
		cin >> cId[i];
	}
	int iIdfst = iFirst(cId[0]),iSum=0;

	for (int i = 1; i < 9; i++)
	{
		iSum += ((cId[i]-48) * (9 - i));
		
		

	}
	iSum += (iIdfst / 10) + (iIdfst % 10) * 9 + (cId[9] - 48);
	iSum = iSum % 10;
	cout << ((iSum==0)?"real":"fake") << endl;
	


	//system("pause");
	   
    return 0;
}