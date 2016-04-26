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

void twentyQ::buildHeads(){ //this function initializes the heads of both linked lists and sets walker pointers for both
	//Questions * Qhead = new Questions;
	//Pets * Phead = new Pets;
	Qhead->next = NULL; 
	Phead->next = NULL;
	//Questions * Qwalk = new Questions;
	Qwalk = Qhead; //need to add these to public
	//Pets * Pwalk = new Pets;
	Pwalk = Phead;
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
			string in;
			getline(infile, line);
			stringstream ss(line);
			while (getline(ss, in, ',')){
				if(i == -1){
					name = in;
				}else{
					
					ans[i] = atoi(in);
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
	cout<<Qwalk->question<<endl;
	getline(cin, userResponse);
	Qwalk=Qwalk->nextQ;
}




void twentyQ::buildQuestions(string question) {
	Questions * NewQ = new Questions;
	NewQ->question = question;
	NewQ->nextQ = NULL;
	Qwalk->nextQ = NewQ;
	Qwalk = Qwalk->nextQ;

}

void twentyQ::buildPets (string name, int ans[]) { //Builds pets linked list. //Might need ans[20] 
	//this seems really simple but I think it works. I have a walker pointer set and then updated to the next (originally set as head)
	Pets * NewP = new Pets;
	NewP = name;
	NewP->ansArr = ans;
	Pwalk->next = NewP;
	Pwalk = Pwalk->next;
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

