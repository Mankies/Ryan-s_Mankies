#pragma once
#include <iostream>
#include <string>
#include "MorseTree.h"
#include "BST.h"


using namespace std;

MorseTree::MorseTree() 
{
	is_tree_made = false;
	roots->Left;
	roots->Right;
}
string MorseTree::get_letter(const char& letter) {


	map<char, string>::const_iterator it = convert_letter.find(letter);
	if (it != convert_letter.end())
	{
		return it->second;
	}
	else
		return "";
}
string MorseTree::get_code(const char LD ) {
	map<char, string>::const_iterator it = convert_letter.find(LD);
	if (it != convert_letter.end())
	{
		return it->second;
	}
	else
		return "";
}
string MorseTree::encode(string letter) {
	
	map<char, string> myMap;

	string ENCODED;
	
		for (map<char, string>::iterator itr = convert_letter.begin(); itr != letter.end();
		if (itr != convert_letter.end())
		{
			ENCODED += itr->first + " ";
		}
		else
			return " ";
	}
	cout << ENCODED;
	return string(ENCODED);
}
string MorseTree::decode(string code) {

	string decode; // result
	decode += get_letter(code.find(" ")); // decode first substring and add to result

	while (code.find(" ") != -1) { // while there are still spaces in the string
		code = code.substr(code.find(" ") + 1); // slice decoded substring
		decode += get_letter(code.find(" "));
		cout << code;
	}
	return decode;


}
void MorseTree::tree_creation(char temp, string LD) {
	convert_letter[temp] = LD;
	convert_dash[LD] = temp;

	for (int i = 0; i <= LD.length(); i++) {
		if (LD[i] == '.') {
			if (roots->Left == nullptr) {

				roots->Left == new node;
				curTree == (roots->Left);
				cout << roots;
			}
			else {
				curTree =roots->Left;
			}
		}
			else if (LD[i] == '-' || LD[i] == '_') { // dash = navigate right
				if (roots->Right == nullptr) {
				roots->Right == new node;
				curTree == roots->Right; // go read the comments above
				}
				}
				else {
					curTree == roots->Right;
				}
		}


	if (convert_letter.size() > 25) {
		is_tree_made = true;				// Use this to keep other functions disabled
										// until tree is populated
	}
		
}
