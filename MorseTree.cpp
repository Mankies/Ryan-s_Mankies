#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "MorseTree.h"

using namespace std;


// Default Constructor
MorseTree::MorseTree()
{
	BST();
}


// Creates a BST that stores the alphabet based on Morse Code sorting criteria
void MorseTree::buildMorseTree()
{
	readLines();
}


// Helper function that reads text file line by line (WORKS)
void MorseTree::readLines()
{

	node* ptr = root;

	string letter = "";
	string morseCode = "";
	string currentLine = "";


	ifstream morseFile;

	morseFile.open("morse.txt");

	if (!morseFile)
	{
		cout << "Unable to open file.";
		exit(1);
	}

	cout << endl << "File is opened." << endl << endl;

	if (morseFile.good())
	{


		morseFile >> currentLine;           // Catches first line
		letter = currentLine.substr(0, 1);
		morseCode = currentLine.substr(1);

		// Temp for testing
		cout << "First letter is " << letter << ", and code is ( " << morseCode << " ). " << endl << endl;


		for (string line; getline(morseFile, line); )     //Cycles through the rest of the lines
		{

			morseFile >> currentLine;
			letter = currentLine.substr(0, 1);
			morseCode = currentLine.substr(1);


			//(IT ALL WORKS IF THIS LINE IS COMMENTED OUT)
			insertLetter(letter, morseCode, ptr);  // Calls helper function 


												   // Temp for testing
			cout << "First letter is " << letter << ", and code is ( " << morseCode << " ). " << endl << endl;
		}
	}

	morseFile.close();

	// Temp for testing
	cout << endl << "File is closed." << endl << endl;

}


// Helper function that takes letters and stores them based on sorting criteria (NOT WORKING)
void MorseTree::insertLetter(string letter, string morseCode, node* ptr)
{

	string currentLetter = letter;
	string mCode = morseCode;
	//string currentLine;
	int i = 0;

	while (i = 0, i <= mCode.size(), i++)
	{
		if (mCode[i] != ("_" || "-" || "."))
		{
			cout << endl << "Error, incompatiple char in Morse Code" << endl;
		}
		if (mCode[i] == ("_" || "-"))
		{
			if (ptr->right = NULL)
			{
				addLeaf("");
			}
			ptr = ptr->right;
		}
		else
		{
			if (ptr->left = NULL)
			{
				addLeaf("");
			}
			ptr = ptr->left;
		}
	}
	ptr->nodeData = currentLetter;

}


// Temporary functions for testing
void MorseTree::MorseTest()
{

	// printTest();

	buildMorseTree();

}