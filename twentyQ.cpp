#include "twentyQ.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;


twentyQ::Questions()
{
	//ctor
}


twentyQ::~Questions()
{
}

void twentyQ::readPets(){ //hope this works, no idea...
	//reading txt file containing pet names and answer values
	string filename = "pets.txt";
	string line = "";
	ifstream infile;
	infile.open(filename);
	if(infile.is_open()){
		string name = "";
		string ans[20];
		
		while(!ifstream.eof()){
			int i=-1;
			getline(infile, line);
			stringstream ss(line);
			while (getline(ss, in, ',')){
				if(i == -1){
					name = in;
				}else{
					ans[i] = in;
				}
				i++;
			}
			q.addPets(name, ans);  //need to create class q and set function
			
		}
	}
}
void twentyQ::readQuestions(){
	string filename = "questions.txt";
	string line = "";
	ifstream infile;
	infile.open(filename);
	if(infile.is_open()){
		while(!ifstream.eof()){
			getline(infile, line);
			q.addQuestions(line);
		}
	}
}

void twentyQ::printMenu() {
	cout<< "===== 20 QUESTIONS ===="<<endl;
	cout<< "1. Directions"<<endl;
	cout<< "2. Start"<<endl;
	cout<< "3. ?"<<endl;
	cout<< "4. Quit"<<endl;
}

void twentyQ::printDirections() { //A fun way to make it more interesting and change the outcome
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
void twentyQ::printQuestions() { //This function will display questions
	cout<<Temp->question<<endl;
	getline(cin, userResponse);
	Temp=Temp->nextQ;
}




void twentyQ::buildQuestions(string question) {
	index = 0;
	//Set Qhead = question1 once it is built
	

}

void twentyQ::buildPets (string name, string ans) { //Builds pets linked list. 
	
	/*int i = 0;
	head = new Pets;
	head->next = NULL;
	Pets * tmp = head;
	while(i<10){
		tmp->
	}*/
}

void twentyQ::findPetsTail() {
	Pets * Traverse = new Pets;
	Traverse = Phead;
	while (Traverse->next != NULL) {
		Traverse = Traverse->next;
	}
	PTail = Traverse;
}

void twentyQ::buildResponse() {//Might be " instead of '. I forget which symbol to use for a string. 
	if ((userResponse =="yes") ||(userResponse =="Yes")||(userResponse =="y")||(userResponse =="Y")) {
		matchup = true;// allows us to compare response to preset responses in addCount
		userArray[index] = true;
		index++;
	}
	if ((userResponse =="no") ||(userResponse =="No")||(userResponse =="n")||(userResponse =="N")) {
		matchup = false;
		userArray[index] = false;
		index++;
	}

}


void twentyQ::addCount() { //adds count to pet struct
	Pets * traverse = new Pets;
	traverse = Phead 
	if (matchup = traverse->ansArr[index-1]) //Has to be -1 because we incremented index in buildResponse
	{
		traverse->score = traverse->score+1;		
	}
	traverse = traverse->next;
	
}

