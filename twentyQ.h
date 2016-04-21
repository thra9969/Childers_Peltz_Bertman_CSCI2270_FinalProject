#ifndef TWENTYQ_H
#define TWENTYQ_H
#include <string>
//#include <vector>

struct Pets {
	std::string Pname;  //name of pet
	bool ansArr[20]; //answers to question for each pet
	Pets *next;
	int score = 0; //the score each pet has;  let the greatest pet win!
	Pets * Head; //Points to head of list
	//Pets * Tail; //Gets set by findPetsTail();
};
struct Questions {
	std::string question; //what it asks
	Questions *nextQ; //points to next question in list
	Questions *Head; // Points to head in list
	Questions *Temp; //Used to traverse through the questions
};

class Questions
{
public:
	Questions();
	~Questions();
	//Pets(); //Do we need to add this in?
	//~Pets(); 
	//void findPetsTail(); //Finds and sets tail of pets
	void printMenu();
	void printDirections();
	void printQuestions(); //This function will display question and store answers
	void addCount(); //adds count to pet struct
	bool userArray[20]; //Used to store user responses
	bool matchup; //Used to compare user responses with preset response in Pets array
	int index; //Used to store current index of userArray
	
private:
	


#endif // HASHTABLE_H

