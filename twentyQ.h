#ifndef TWENTYQ_H
#define TWENTYQ_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <sstream>
#include <istream>
using namespace std;

struct Pets {
	std::string name;  //name of pet
	int ansArr[20]; //answers to question for each pet
	Pets *next;
	int score = 0; //the score each pet has;  let the greatest pet win!

};
struct Questions {
	std::string question; //what it asks
	Questions *nextQ; //points to next question in list
};

class twentyQ
{
public:
	twentyQ();
	~twentyQ();
	//Pets(); //Do we need to add this in?
	//~Pets(); 
	void printMenu();
	void printDirections();
	void printQuestions(); //This function will display question and store answers
	void readPets();
	void readQuestions();
	void addCount(); //adds count to pet struct
	void findPetsTail(); //Finds tail of list
	void buildPets(string name, int ans[]); //Builds pets
	void buildQuestions(string name);
	void buildHeads();
	bool userArray[20]; //Used to store user responses
	bool matchup; //Used to compare user responses with preset response in Pets array
	int index; //Used to store current index of userArray
	void buildResponse();
	
	string userResponse;
	ifstream infile;
	Pets * Phead; //Points to head of list
	Pets * Ptail; //Gets set by findPetTail();
	Questions *Qhead; // Points to head in list
	Questions *Qwalk; //Used to traverse through the questions
	Pets *Pwalk;
	int Dog[20] = { 1, 1, 0, 0, 1, 1, 0, 0,1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 };
	Phead->name = "Dog";
	Phead->ansArr = Dog;
	Qhead->nextQ = NULL;
	Phead->next = NULL;

	//twentyQ q;

private:



#endif // HASHTABLE_H

