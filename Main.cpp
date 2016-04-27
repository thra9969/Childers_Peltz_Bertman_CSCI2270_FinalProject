#include "twentyQ.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <sstream>
#include <istream>


using namespace std;


//int main(int argc, char * argv[]) {
int main () {
	twentyQ q;
	q.readPets();
	q.readQuestions();
	q.buildHeads();
	int a = 1;
	while (a = 1) {
		string input = "";
		int choice;
		q.printMenu();
		cin >> choice;
		cin.clear();
		cin.ignore(10000, '\n');

		switch (choice)
		{
		case 1: //print directions
			q.printQuestions();
			break;
		case 2: 
			q.printQuestions();
			break;

		case 4:	cout << "Goodbye!" << endl;
			exit(0);

		default: break;

		}

	}

	return 0;

}
