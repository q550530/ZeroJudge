#include <iostream>



using namespace std;



int main() {
int x, y;

while(cin >> y >> x) {
	int nums[y][x];

	for(int i = 0; i < y; i++) {
		for(int k = 0; k < x; k++) {
			cin >> nums[i][k];

		}

	}	

	for(int i = 0; i < x; i++) {
		for(int k = 0; k < y; k++) {
			cout << nums[k][i] << " ";

		}

		cout << endl;

	}

}

return 0;

}