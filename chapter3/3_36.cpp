#include <iostream>
#include <vector>
using namespace std;

bool compare(int *b1, int *e1, int *b2, int *e2)
{
	for(; b1 != e1, b2 != e2; ++b1, ++b2)
	{
		if((e1 - b1) != (e2 - b2))
		{
			return false;
		}
		if (*b1 != *b2)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int arr1[3] = {0, 1, 2};
	int arr2[3] = {0, 1, 2};

	int *b1 = begin(arr1);
	int *e1 = end(arr1);
	int *b2 = begin(arr2);
	int *e2 = end(arr2);

	if (compare(b1, e1, b2, e2))
		cout << "Two arrays are equal!" << endl;
	else
		cout << "Two arrays are not equal!" << endl;

	vector<int> ivec1 = {0, 1, 2};
	vector<int> ivec2 = {0, 1, 3};

	if(ivec1 == ivec2)
		cout << "Two vectors are equal!" << endl;
	else
		cout << "Two vectors are not equal!" << endl;
}
