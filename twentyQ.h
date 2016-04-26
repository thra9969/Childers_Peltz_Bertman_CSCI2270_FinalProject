#ifndef TWENTYQ_H
#define TWENTYQ_H
#include <string>
//#include <vector>

struct Pets {
	std::string Pname;  //name of pet
	bool ansArr[20]; //answers to question for each pet
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
	void buildPets(); //Builds pets
	bool userArray[20]; //Used to store user responses
	bool matchup; //Used to compare user responses with preset response in Pets array
	int index; //Used to store current index of userArray
	Pets * Phead; //Points to head of list
	Pets * Ptail; //Gets set by findPetTail();
	Questions *Qhead; // Points to head in list
	Questions *Qwalk; //Used to traverse through the questions
	Questions *Pwalk;
	
private:
	


#endif // HASHTABLE_H

