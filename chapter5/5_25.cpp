#include <iostream>
#include <stdexcept>
using namespace std;

int main(void)
{
	int i,j;
	cout << "Please input two integers: ";
	while(cin >> i >> j)
	{
		try{
			if (j == 0) 
				throw runtime_error("divisor is 0\n");
			cout << i / j << endl;
		}
		catch (runtime_error err) 
		{
			cout << err.what() << "Please input two integers again: ";
		}
	}

	return 0;
}
