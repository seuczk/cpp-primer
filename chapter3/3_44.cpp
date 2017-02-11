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
	using int_array = int[4];
	for (int_array &i : ia) {
		for (int j : i)
			cout << j << " ";
		cout << endl;
	}

	//second method
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 4; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}

	//third method
	for (int_array *row = ia; row != ia + 3; ++row) {
		cout << "value of row is " << row << endl;
		cout << "value of what row points to is " << *row << endl;
		for (int *col = *row; col != *row + 4; ++col)
			cout << *col << " ";
		cout << endl;
	}
}
