#include <iostream>
using namespace std;

int main()
{
	string prestr, str, max_str;
	unsigned int repeat_cnt=0, max_repeat_cnt = 0;
	while(cin >> str)
	{
		if(prestr == str)
		{
			++repeat_cnt;
		}
		else{
			repeat_cnt = 1;
			prestr = str;
		}
		if(max_repeat_cnt < repeat_cnt)
		{
			max_str = str;
			max_repeat_cnt = repeat_cnt;
		}
	}

	if (max_repeat_cnt <= 1){
		cout << "No word is repeated" << endl;
	} else {
		cout << "The word '" << max_str << "' occurred " << max_repeat_cnt << " times" << endl;
	}

	return 0;
}
