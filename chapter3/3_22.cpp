#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> text;
	//string s;
	//while(cin >> s)
		//text.push_back(s);
	for (string line; getline(cin, line); text.push_back(line));

	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
	{
		for(auto &c : *it)
			c = toupper(c);
		cout << *it << endl;
	}

	return 0;
}
