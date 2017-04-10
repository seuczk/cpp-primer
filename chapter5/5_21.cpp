#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word, preword;
	while (cin >> word) 
	{
		if (isupper(word[0]) && preword == word)
		{
			cout << word << " occurs twice in the sentence." << endl;
			break;
		}
		preword = word;
	}

	if (cin.eof())  
		cout << "No word was repeated." << endl;

	return 0;
}

