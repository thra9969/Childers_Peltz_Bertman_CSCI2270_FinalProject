#ifndef TWENTYQ_H
#define TWENTYQ_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <sstream>
#include <istream>
#include <vector>
#include <time.h>
#include <ctime>

using namespace std;

struct Pets {
	string name;  //name of pet
	int *ansArr[20]; //answers to question for each pet
	Pets *next;
	int score = 0; //the score each pet has;  let the greatest pet win!

};
struct Questions {
	string question; //what it asks
	Questions *next; //points to next question in list
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
		Pets* readPets();
		Questions* readQuestions();
		void addCount(int matchUp, Pets *head, int num); //adds count to pet struct
		Pets *findPetsTail(); //Finds tail of list
		Pets* buildPets(string name, int ans[], Pets *head); //Builds pets
		Questions* buildQuestions(string name, Questions *head);
		int userArray[20]; //Used to store user responses
		int matchup; //Used to compare user responses with preset response in Pets array
		int index; //Used to store current index of userArray
		void buildResponse(string userResponse);
		string backup(); //Deals with pet guessed
		void answerAnalysis(string answer);//Analyzes if pet guess is correct
		int invalidAnswer(string userResponse); //Analyzes if user gave invalid answer to pet guess
		int userInputAnalysis(string userResponse); //Analyzes if user responded incorrectly to a question
		void userInput(string userResponse); //Analyzes if user responded incorrectly to a question
		//Questions *tmp;
		void inspirationalquote (int x);
		Questions * Qwalk;
		string userResponse;
		ifstream infile;
		Pets * current;
		Questions * current2;
		Questions * QTail;
		Pets * PTail;
		Questions * tmp;
		Questions *Qhead;
		Pets *Phead;

		//twentyQ q;
	protected:
	private:


};


#endif // TWENTYQ_H
