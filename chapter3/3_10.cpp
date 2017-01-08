#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str("hello world,!");
	string s;

	for(auto c : str)
		if(!ispunct(c))
			s += 'c';

	cout << s << endl;

	return 0;
}
