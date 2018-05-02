#pragma once
#include <string>
#include "BST.h"

using namespace std;

class MorseTree : public BST    // Derived class from BST
{

public:

	// Default Constructor
	MorseTree();


	//Destructor
	~MorseTree() {}

	void buildMorseTree();      // Creates a BST that stores the alphabet based on Morse Code sorting criteria
	void readLines();           // Helper function that reads text file line by line
	void insertLetter(string letter, string morseCode, node* ptr); // Helper function that takes letters and stores them based on sorting criteria



				
	void MorseTest();      // Temporary functions for testing

};