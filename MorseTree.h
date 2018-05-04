#pragma once
#include <string>
#include "BST.h"
#include<map>

using namespace std;

class MorseTree : public BST 
{

public:
	MorseTree();
	string get_letter(const char& letter);
	string get_code(const char LD);
	string encode(string code);
	string decode(string letter);
	void tree_creation(char letter, string LD);

private:

	map<char, string> convert_letter;
	map<string, char> convert_dash;
	bool is_tree_made;
};