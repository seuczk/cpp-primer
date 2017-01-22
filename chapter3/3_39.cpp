#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string s1("haha"), s2("hello");
	if(s1 == s2)
		cout << "Two strings are equal!" << endl;
	else if (s1 > s2)
		cout << "The first string is greater!" << endl;
	else
		cout << "The second string is greater!" << endl;

	const char *c1 = "haha";
	const char *c2 = "hello";
	auto result = strcmp(c1, c2);
	if(result == 0)
		cout << "Two strings are equal!" << endl;
	else if (result > 0)
		cout << "The first string is greater!" << endl;
	else
		cout << "The second string is greater!" << endl;
		
	return 0;
}
