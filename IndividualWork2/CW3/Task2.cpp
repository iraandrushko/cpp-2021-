#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int getLinesCount1(string fileName)
{
	ifstream input("in1.txt");
	int count1 = 0;
	for (std::string line; getline(input, line); )
	{
		count1++;
	}
	return count1;
}

int main()
{
	int c1 = getLinesCount1("in1.txt");
	int c2 = getLinesCount1("in2.txt");
	int i = 0;


	string* arr1 = new string[c1];
	string* arr2 = new string[c2];

	ifstream input("in1.txt");
	for (std::string line; getline(input, line); )
	{
		arr1[i] = line;
		i++;
	}

	i = 0;
	ifstream input2("in2.txt");
	for (std::string line; getline(input2, line); )
	{
		arr2[i] = line;
		i++;
	}

	ofstream fout1;
	fout1.open("outres.txt");

	for (int i = 0; i < c1; i++)
	{
		for (int j = i; j < c2; j++)
		{
			if (arr1[i] == arr2[j]) {
				fout1 << arr1[i] << endl;
			}
		}
	}

	fout1.close();

	return 0;
}