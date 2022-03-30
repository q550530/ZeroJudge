#include <string>
#include<iostream>
#include <algorithm>
#include<vector>



using namespace std;
class Myscore
{
private:
	int STUID;
	int iInfoScore;
	int iMath;
	int iEng;
	double iAvg;

public:
	Myscore();
	Myscore(int&,int&,int&,int&);
	void vShow();
	int getAvg();
	int getIm();
	int getiE();
	int getIi();

};

Myscore::Myscore()
{
	STUID = 1;
	iInfoScore = 0;
	iMath = 0;
	iEng = 0;
	iAvg = 0;
}

Myscore::Myscore(int &ID,int &iI,int &iM,int &iE)
{
	STUID = ID;
	iInfoScore = iI;
	iMath = iM;
	iEng = iE;
	iAvg = (double(iInfoScore * 5 + iMath * 3 + iEng * 2) / 10);
}
void Myscore::vShow(){
	cout << STUID << ' ' << iAvg << endl;

}

int Myscore::getAvg(){
	return iAvg;
}
int Myscore::getiE(){
	return iEng;
}

int Myscore::getIi(){
	return iInfoScore;
}

int Myscore::getIm(){
	return iMath;
}



int main()
{
	int StuNUm;
	vector<Myscore> vecMyscore;
	cin >> StuNUm;
	
	int iD=0,iI = 0, iM = 0, iE = 0;
	for (int i = 1; i <= StuNUm; i++)
	{
		cin >> iD >> iI >> iM >> iE;
		Myscore M(iD, iI, iM, iE );
		vecMyscore.push_back(M);
	}

	for (int i = 0; i < StuNUm; i++)
	{
		for (int o = 0; o < StuNUm; o++)
		{
			if (vecMyscore[i].getAvg() > vecMyscore[o].getAvg()){
				swap(vecMyscore[i],vecMyscore[o]);
			}
			if (vecMyscore[i].getAvg() == vecMyscore[o].getAvg() && vecMyscore[i].getIi() < vecMyscore[o].getIi()){
				swap(vecMyscore[i], vecMyscore[o]);
			}
			if (vecMyscore[i].getAvg() == vecMyscore[o].getAvg() && vecMyscore[i].getIm() < vecMyscore[o].getIm()){
				swap(vecMyscore[i], vecMyscore[o]);
			}
			if (vecMyscore[i].getAvg() == vecMyscore[o].getAvg() && vecMyscore[i].getiE() < vecMyscore[o].getiE()){
				swap(vecMyscore[i], vecMyscore[o]);
			}
			if (vecMyscore[i].getAvg()==vecMyscore[o].getAvg()&&i<o)
			{
				swap(vecMyscore[i], vecMyscore[o]);
			}
		}
	}

	for (int i = 0; i<StuNUm; i++){
		vecMyscore[i].vShow();

	}

	
    return 0;
}

