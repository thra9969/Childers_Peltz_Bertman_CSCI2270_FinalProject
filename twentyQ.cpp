#include "twentyQ.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;


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
	cout<<Temp->question<<endl;
	getline(cin, userResponse);
	Temp=Temp->nextQ;
}



void Questions::buildQuestions() {
	index = 0;
	//Set Qhead = question1 once it is built
	

}

void Questions::buildPets () { //Builds pets linked list. 
	
}

void Questions::findPetTail() {
	Pets * Traverse = new Pets;
	Traverse = Phead;
	while (Traverse->next != NULL) {
		Traverse = Traverse->next;
	}
	PTail = Traverse;
}

void Questions::buildResponse() {//Might be " instead of '. I forget which symbol to use for a string. 
	if ((userResponse =='yes') ||(userResponse =='Yes')||(userResponse =='y')||(userResponse =='Y')) {
		matchup = true;// allows us to compare response to preset responses in addCount
		userArray[index] = true;
		index++;
	}
	if ((userResponse =='no') ||(userResponse =='No')||(userResponse =='n')||(userResponse =='N')) {
		matchup = false;
		userArray[index] = false;
		index++;
	}

}


void Questions::addCount() { //adds count to pet struct
	Pets * traverse = new Pets;
	traverse = Phead 
	if (matchup = traverse->ansArr[index-1]) //Has to be -1 because we incremented index in buildResponse
	{
		traverse->score = traverse->score+1;		
	}
	traverse = traverse->next;
	
}

