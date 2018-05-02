#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "BST.h"

using namespace std;


// Default Constructor
BST::BST()
{
	root = NULL;
}


// Creates a new node
BST::node* BST::createNewLeaf(string nodeData)
{
	node* newNode = new node;
	newNode->nodeData = nodeData;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}


// Wrapper functon for function below
BST::node* BST::getNodeData(string nodeData) const
{
	return getNodeDataPrivate(nodeData, root);
}


// Retrieves node data
BST::node* BST::getNodeDataPrivate(string nodeData, node* ptr) const
{

	if (ptr != NULL)
	{
		if (ptr->nodeData == nodeData)
		{
			return ptr;
		}
		else
		{
			if (nodeData < ptr->nodeData)
			{
				return getNodeDataPrivate(nodeData, ptr->left);
			}
			else
			{
				return getNodeDataPrivate(nodeData, ptr->right);
			}
		}
	}
	else
	{
		return NULL;
	}

}


// Wrapper functon for function below
void BST::addLeaf(string nodeData)
{
	addLeafPrivate(nodeData, root);
}


// Adds a leaf to current tree
void BST::addLeafPrivate(string nodeData, node* ptr)
{
	if (root == NULL)
	{
		root = createNewLeaf(nodeData);
	}
	else if (nodeData < ptr->nodeData)
	{
		if (ptr->left != NULL)
		{
			addLeafPrivate(nodeData, ptr->left);
		}
		else
		{
			ptr->left = createNewLeaf(nodeData);
		}
	}
	else if (nodeData > ptr->nodeData)
	{
		if (ptr->right != NULL)
		{
			addLeafPrivate(nodeData, ptr->right);
		}
		else
		{
			ptr->right = createNewLeaf(nodeData);
		}

	}
	else
	{
		cout << "The data '" << nodeData << "' is already in the tree." << endl;
	}

}


// Wrapper functon for function below
void BST::printInOrder() const
{
	PrintInOrderPrivate(root);
}


// Prints the node data values in sorted order
void BST::PrintInOrderPrivate(node* ptr) const
{
	if (root != NULL)
	{
		if (ptr->left != NULL)
		{
			PrintInOrderPrivate(ptr->left);
		}
		cout << ptr->nodeData << " ";
		if (ptr->right != NULL)
		{
			PrintInOrderPrivate(ptr->right);
		}
	}
	else
	{
		cout << "Tree is empty. " << endl;
	}
}


// Prints the children of the current node
void BST::printChildren(string nodeData) const
{
	node* ptr = getNodeData(nodeData);

	if (ptr != NULL)
	{
		cout << endl << "Parent Node = " << ptr->nodeData << endl;

		if (ptr->left == NULL)
		{
			cout << "Left Child = NULL" << endl;
		}
		else
		{
			cout << "Left Child = " << ptr->left->nodeData << endl;
		}
		if (ptr->right == NULL)
		{
			cout << "Right Child = NULL" << endl;
		}
		else
		{
			cout << "Right Child = " << ptr->right->nodeData << endl;
		}

	}
	else
	{
		cout << "Data '" << nodeData << "' is not in the tree." << endl;
	}
}


// Returns the root's data
string BST::getRootData() const
{
	return root->nodeData;
}


// Checks if the current node is a leaf or not
bool BST::isLeaf() const
{
	if (root != NULL)
	{
		if (left != NULL || right != NULL)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

}


// Temporary functions for testing
void BST::printTest()
{
	string TreeData[16] = { "b", "f", "e", "j", "df", "tg", "yh", "k", "efg", "gg", "ef", "ck", "fd", "fu", "kr", "ak" };


	cout << "Printing the tree in order..." << endl << "Before adding numbers: " << endl;

	printInOrder();


	for (int i = 0; i < 16; i++)
	{
		addLeaf(TreeData[i]);
	}
	cout << endl;

	cout << "Printing the tree in order..." << endl << "After adding numbers: " << endl;

	printInOrder();
	cout << endl;


	for (int i = 0; i < 16; i++)
	{
		printChildren(TreeData[i]);
	}
	cout << endl;

}