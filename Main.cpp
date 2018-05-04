#include<iostream>
#include<fstream>
#include "MorseTree.h"
#include<cstdlib>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	string code, value, temp;
	char letter = ' ';
	MorseTree MorseCode;

	//// 1. check file exists
	//try
	//{
	//	fin.open("morse.txt");
	//}
	//catch (exception e)
	//{
	//	cerr << "Unable to open file." << endl;
	//	cout << "Unable to open txt file" << "\n" << "Program will now exit." << endl;
	//	system("pause");
	//	exit(0);
	//}

	////2. Read in data from files
	//while (fin >> value)//while there is data to read
	//{
	//	string::iterator it;
	//	int index = 0;
	//	for (it = value.begin(); it < value.end(); ++it, ++index) {
	//		if (isalnum(*it)) {//determine if is a letter value
	//			letter = *it;
	//		}
	//		if (index != 0 && index <= 4) {
	//			if (!isalnum(*it)) {//get the rest of the info from the line
	//				code += *it;
	//			}
	//		}
	//	}
	//
	//	MorseCode.tree_creation(letter, code);//buiilds tree and populates maps
	//
	//	system("pause");
	//	code = "";//clear code after each iteration
	//}

	//currently test strings
	////change the string to test for different outcomes
	/*cout << "does this work" << MorseCode.decode(".... .. ._.. ._.. ._ ._. _.__ ._. .. __. __. . _.. _ .... . .__. ._. .. __ ._ ._. _.__ ") << endl;*/
	cout << "does this work 2" << MorseCode.encode("helpimtrappedinacomputer") << endl;

	system("pause");
	return 0;
}