#include <iostream>
using namespace std;
#include <string>
string delete_letters(string s);

int main() 
{
	char string[100];
	cout << "Enter string: " << endl;
	cin.getline(string, 100);
	cout << delete_letters(string);
	return 0;
}

string delete_letters(string s)
{
	int i = s.length() - 1;
	while (i >= 0)
	{
		if (isalpha(s[i]))
		{
			s.erase(i, 1);

		}
		i--;
	}
	
	return  s;
}