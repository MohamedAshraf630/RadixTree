
#include <iostream>
#include "Tree.h"
using namespace std;


string CheckWord(Tree* tree, string word) {
	string message = "";
	if (tree->Lookup(word)) {
		message = word + " FOUND";
	}
	else {
		message = word + " NOT FOUND";
	}
	return message;
}

int main()
{
	Tree* tree = new Tree();
	tree->Insert("Star");
	tree->Insert("Steve");
	tree->Insert("Stranza");

	cout << CheckWord(tree, "Steve") << endl;

	tree->Delete("Steve");

	cout << CheckWord(tree, "Star") << endl;
	cout << CheckWord(tree, "Steve") << endl;
	cout << CheckWord(tree, "Stranza") << endl;
}


