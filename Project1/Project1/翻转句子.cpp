#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int mainfanzhuanjuzi()
{
	string text;
	while (getline(cin, text))
	{
		vector<string> wordList;
		istringstream stream(text);
		string word;
		while (stream >> word)
		{
			wordList.push_back(word);
			//cout << " ";
		}
		for (vector<string>::reverse_iterator rit = wordList.rbegin();
		rit != wordList.rend()-1; rit++)
		{
			cout << *rit << " ";
		}
		cout << wordList[0]<<endl;
	}
	return 1;
}