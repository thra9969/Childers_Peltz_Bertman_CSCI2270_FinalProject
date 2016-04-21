#include "twentyQ.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

 //struct Pets { 
 //std::string Pname;  //name of pet 
//	bool ansArr[20]; //answers to question for each pet 
//	Pets *next; 
// 	int score = 0; //the score each pet has;  let the greatest pet win! 
// }; 
// struct Questions { 
// 	std::string question; //what it asks 
// 	Questions *nextQ; //points to next question in list 
// }; 
  


Questions::Questions()
{
	//ctor
}


Questions::~Questions()
{
}

void Questions::printMenu() {

}
void Questions::printDirections() { //A fun way to make it more interesting and change the outcome
	cout<<"Welcome to 20 questions. How are you doing?"<<endl;
	string response;
	getline(cin, response);
	if (response.size() % 3 = 1) {
		cout<<"Well, your day is about to get a whole lot better!"<<endl;
	}
	else if (response.size() % 3 = 2) {
		cout<<"Well, mine has been awful. Thanks for asking."<<endl;
	}
	else {
		cout<<"Oh. I don't actually care. Sorry. People don't get my sarcasm."<<endl;
	}
	cout<<"Here's how to play. Think of a pet. This pet has to be a pet legal to own in America. So no kangaroos."<<endl;
	cout<<"I'm going to read your mind. I'll ask you 20 questions just to make sure I got a good read."<<endl;
	cout<<"Then I'll tell you exactly what you were thinking of. Answer my questions with a yes or no"<<endl; 
}
void Questions::printQuestions() { //This function will display questions
}



void Questions::buildQuestions() {

}

void Questions::buildResponse() {

}


void Questions::addCount() { //adds count to pet struct
	
}

