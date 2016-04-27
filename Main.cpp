#include "twentyQ.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

using namespace std;


//int main(int argc, char * argv[]) {
int main() {
	twentyQ q;
	/*Pets * Phead = new Pets; //Points to head of list
	Pets * Ptail = new Pets; //Gets set by findPetTail();
	Ptail = q.findPetsTail();
	Questions *Qhead; // Points to head in list
	Questions *Qwalk; //Used to traverse through the questions
	Pets *Pwalk;
	int Dog[20] = { 1, 1, 0, 0, 1, 1, 0, 0,1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 };
	Phead->name = "Dog";
	Phead->ansArr = Dog;
	Qhead->nextQ = NULL;
	Phead->next = NULL;*/

	//q.readPets();
	//q.readQuestions();
	//q.buildHeads();
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
		case 1: { //print directions
			q.printDirections();
			break; }
		case 2: {
			q.printQuestions();
			break; }
		case 3: {
			break;
		}

		case 4: {
			cout << "Goodbye!" << endl;
			exit(0); }

		default:{
			cout << "Invalid input. Please try again." << endl;
			break;
			}
		}

	}

	return 0;

}
