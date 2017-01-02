#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b;
	while(cin >> a >> b)
	{
		if (a == b)
			cout << "Two strings are not equal!" << endl;
		else
			cout << "The larger string is " << ((a > b) ? a : b) << endl;
	}

	return 0;
}
