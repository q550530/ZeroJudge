#include <string>
#include<iostream>



using namespace std;

class ID{
private:
	string id;
public:
	ID();
	void setID(string);
	string getID();
	bool verID();

};



int main()
{
    
	ID myID;
	string myString;
	cin >> myString;
	myID.setID(myString);
	myID.verID();
	

	system("pause");


    return 0;
}

ID::ID(){
	id = "";
}


void ID::setID(string _id){
	id = _id;

}
string ID::getID(){
	return id;

}

bool ID::verID(){
	int iSum = 0;
	string sArea[] = { "臺北市", "臺中市", "基隆市", "臺南市", "高雄市", "新北市", "宜蘭縣", "桃園市", "嘉義市", "新竹縣", "苗栗縣", "", "南投縣", "彰化縣", "新竹市", "雲林縣", "嘉義縣", "", "", "屏東縣", "花蓮縣", "臺東縣", "金門縣", "澎湖縣", "", "連江縣" };
	int iArea[] = { 10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 0, 21, 22, 35, 23, 24, 0, 0, 27, 28, 29, 32, 30, 0, 33 };

	iSum += (iArea[id[0] - 'A'] / 10 * 1);
	iSum += (iArea[id[0] - 'A'] % 10 * 9);

	for (int i = 1; i<9; i++)
	{
		iSum += (id[i] - '0')*(9 - i);
	}
	iSum += (id[9] - '0') * 1;

	
	if (iSum % 10 == 0){
		cout << "real" << endl;
		return true;
	}
	else
	{
		cout << "fake" << endl;
		return false;
	}

}