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

class Questions
{
public:
	Questions();
	~Questions();
	void printMenu();
	void printDirections();
	void printQuestions(); //This function will display question and store answers
	void addCount(); //adds count to pet struct
	void 
	
private:
	


#endif // HASHTABLE_H

