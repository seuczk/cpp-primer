#include <iostream>
#include <string>
using namespace std;

int main()
{
	string concatenated;
	for(string temp; cin >> temp; concatenated += " " + temp);
	cout << "The concatenated string is " << concatenated << endl;

	return 0;
}
