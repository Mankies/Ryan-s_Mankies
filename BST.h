#pragma once
#include <string>

using namespace std;


class BST
{

	// Protected Member Functions
protected:


	// Node struct to create tree
	struct node
	{
		string nodeData;
		node* left;
		node* right;
	};

	node* root;
	node* createNewLeaf(string nodeData);                        // Creates a new node
	node* getNodeData(string nodeData) const;                    // Wrapper function for function below
	node* getNodeDataPrivate(string nodeData, node* ptr) const;  // Retrieves node data

	void addLeafPrivate(string nodeData, node* ptr);             // Adds leaf to current tree
	void PrintInOrderPrivate(node* ptr) const;                   // Prints the node data values in sorted order


																 // Public Member Functions
public:


	BST();                                     // Default Constructor

	void addLeaf(string nodeData);             // Adds leaf to current tree
	void printInOrder() const;                 // Prints the node data values in sorted order
	void printChildren(string nodeData) const; // Prints the children of the current node
	string getRootData() const;                // Returns the root's data
	bool isLeaf() const;                       // Checks if the current node is a leaf or not





											   // Temporary functions for testing
	void printTest();


};