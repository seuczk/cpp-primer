#include <iostream>
using namespace std;

int main ()
{
	int ia[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};

	//first method
	for (auto &i : ia) {
		for (auto j : i)
			cout << j << " ";
		cout << endl;
	}

	//second method
	for (auto i = 0; i < 3; ++i) {
		for (auto j = 0; j < 4; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}

	//third method
	for (auto &row : ia) {
		cout << "value of row is " << row << endl;
		cout << "value of what row points to is " << *row << endl;
		for (auto col : row)
			cout << col << " ";
		cout << endl;
	}
}
