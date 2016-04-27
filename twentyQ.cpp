#include "twentyQ.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <sstream>
#include <istream>
#include <vector>
using namespace std;


volatile int q = 0;
volatile int a = 0;

twentyQ::twentyQ()
{
	//ctor
}


twentyQ::~twentyQ()
{
}


Pets* twentyQ::readPets() {
//Reads in a text file and builds into a linked list. This part didn't work, so its commented.
	/*string filename = "pets.txt";
	string line;

	infile.open(filename);
	if (infile.is_open()) {
		string name = "";
		int ans[20];

		while (!infile.eof()) {
			int i = -1;
			string in;
			getline(infile, line);
			stringstream ss(line);
			while (getline(ss, in, ',')) {
				if (i == -1) {
					//cout << in << endl;
					name = in;
				}
				else {
					ans[i] = stoi(in);
				}
				i++;
				//cout << i << endl;
			}
			//buildPets(name, &ans[20]);  //need to create class q and set function

		}
	}*/


    //all data from pets.txt is hard coded here
	Pets *Phead = new Pets;

	int dogarr[20] = { 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 };
	buildPets("dog", dogarr, Phead);
	int catarr[20] = { 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0 };
	buildPets("cat", catarr, Phead);
	int rabbitarr[20] = { 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 };
	buildPets("rabbit", rabbitarr, Phead);
	int hamarr[20] = { 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0 };
	buildPets("hamster", hamarr, Phead);
	int lizarr [20] = { 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 };
	buildPets("lizard", lizarr, Phead);
	int birdarr[20] = { 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1 };
	buildPets("bird", birdarr, Phead);
	int ferrarr[20] = { 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0 };
	buildPets("ferret", ferrarr, Phead);
	int turtarr[20] = { 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 };
	buildPets("turtle", turtarr, Phead);
	int fisharr[20] = { 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 };
	buildPets("fish", fisharr, Phead);
	int hedarr[20] = { 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,};
	buildPets("hedgehog", hedarr, Phead);
	int herarr[20] = { 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0 };
	buildPets("hermit crab", herarr, Phead);
	int snakearr[20] = { 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0 };
	buildPets("snake", snakearr, Phead);
	int mousearr[20] = { 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0 };
	buildPets("mouse", mousearr, Phead);
	int goatarr[20] = { 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0 };
	buildPets("goat", goatarr, Phead);
	int monkarr[20] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0 };
	buildPets("monkey", monkarr, Phead);
	int buttarr[20] = { 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 };
	buildPets("butterfly", buttarr, Phead);
	int chickarr[20] = { 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0 };
	buildPets("chicken", chickarr, Phead);
	int pigarr[20] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0 };
	buildPets("pig", pigarr, Phead);
	int snailarr[20] = { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; 
	buildPets("snail", snailarr, Phead);
	int rockarr[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; //if you try to be smart and answer all nos
	buildPets("rock", rockarr, Phead);
	int smartarr[20] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }; //if you try to be smart and answer all yesses
	buildPets("Smartass...", smartarr, Phead);

	return Phead;


}

Questions* twentyQ::readQuestions() { 
	//cout << "mewo" << endl;
	string filename = "Questions.txt";
	string line = "";
	Questions *Qhead = new Questions;

	infile.open(filename);
	if (infile.is_open()) {
		while (!infile.eof()) {
			getline(infile, line);
			buildQuestions(line, Qhead);
		}
	}
	return Qhead;
}

void twentyQ::printMenu() { //prints menu. But you knew that already.
	cout << "===== 20 QUESTIONS ====" << endl;
	cout << "1. Directions" << endl;
	cout << "2. Start" << endl;
	cout << "3. ?" << endl;
	cout << "4. Quit" << endl;
}

void twentyQ::printDirections() { //A fun way to make it more interesting and change the outcome
	cout << "Welcome to 20 questions. How are you doing?" << endl;
	string response;
	getline(cin, response);
	if (response.size() % 3 == 1) {
		cout << "Well, your day is about to get a whole lot better!" << endl;
	}
	else if (response.size() % 3 == 2) {
		cout << "Well, mine has been awful. Thanks for asking." << endl;
	}
	else {
		cout << "Oh. I don't actually care. Sorry. People don't get my sarcasm." << endl;
	}
	cout << "Here's how to play. Think of a pet. This pet has to be a pet legal to own in America. So no kangaroos." << endl;
	cout << "I'm going to read your mind. I'll ask you 20 questions just to make sure I got a good read." << endl;
	cout << "Then I'll tell you exactly what you were thinking of. Answer my questions with a yes or no" << endl;
}
void twentyQ::printQuestions() { //This function will display questions
	Questions *Qhead = readQuestions(); 
	Questions *tmp = Qhead;
	//cout << "made it" << endl;
	while (tmp != NULL) {
		cout << tmp->question << endl;
		getline(cin, userResponse);
		userInput(userResponse);
		//buildResponse(userResponse);
		if (tmp->next->question == QTail->question) {
		    cout<<QTail->question<<endl;
            getline(cin, userResponse);
            string answer = backup();
            answerAnalysis(answer);
			return;
		}
		tmp = tmp->next;

	}
}

void twentyQ::userInput(string userResponse) {
	int x = 0;
	while (x == 0) {
		x = userInputAnalysis(userResponse);
		if (x == 0) {
			getline(cin, userResponse);
		}
	}
}

int twentyQ::userInputAnalysis(string userResponse) {
		if ((userResponse == "yes") || (userResponse == "Yes") || (userResponse == "y") || (userResponse == "Y")) {
		return 1;
	}
	else if ((userResponse == "no") || (userResponse == "No") || (userResponse == "n") || (userResponse == "N")) {
		return 1;
	}
	cout<<"Come on. Give me a yes or no. I'm not playing around here."<<endl;
	return 0;
}

void twentyQ::answerAnalysis(string userResponse) {
	int x = 0;
	while (x == 0) {
		x = invalidAnswer(userResponse);
		if (x == 0) {
			getline(cin, userResponse);
		}
	}
}

int twentyQ::invalidAnswer(string userResponse) {
	if ((userResponse == "yes") || (userResponse == "Yes") || (userResponse == "y") || (userResponse == "Y")) {
		cout<<"Of course I got it right. I'm perfect. Better luck next time. You'll need it."<<endl;
		return 1;
	}
	else if ((userResponse == "no") || (userResponse == "No") || (userResponse == "n") || (userResponse == "N")) {
		cout<<"Oh well. Nobody's perfect."<<endl;
		return 1;
	}
	cout<<"Come on. Give me a yes or no. I'm not playing around here."<<endl;
	return 0;
}


Questions* twentyQ::buildQuestions(string question, Questions *Qhead) {


	Questions *newQ = new Questions;
	newQ->question = question;
	//cout<<newQ->question<<"build"<<endl;
	if (a == 0) {
		Qhead->question = question;
		Qhead->next = NULL;
		a = 1;
		current2 = Qhead;
		return Qhead;
	}
	current2->next = newQ;
    //cout << Qhead->question << "endbuild"<<endl;
	current2 = newQ;
	if (question == "Have you heard that your pet is the word???") {
		QTail = current2;

	}
	return Qhead;
}





Pets* twentyQ::buildPets(string name, int ans[], Pets *Phead) { //Builds pets linked list. //Might need ans[20]
	//cout << "HERE" << endl;
	Pets *newP = new Pets;
	newP->name = name;
	if (q == 0) {
		Phead->name = name;
		Phead->next = NULL;
		for (int i = 0; i < 20; i++) {
			Phead->ansArr[i] = NULL;
		}
		q = 1;
		current = Phead;
		return current;
	}
	current->next = newP;
	current = newP;
	newP->name = name;
	for (int i = 0; i < 20; i++) {
		newP->ansArr[i] = &ans[i];
		newP->name = name;
	}

	if (name == "Smartass...") {
		PTail = current;
	}
	return current;
}

string twentyQ::backup() {
 string backup[20] = {"Dog", "Cat", "Rabbit", "Hamster", "Lizard", "Bird", "Ferret", "Turtle", "Fish", "Hedgehog", "Hermit Crab", "Snake", "Mouse", "Goat", "Monkey", "Butterfly", "Chicken", "Pig", "Snail", "Rock"};
 srand (time(NULL));
 int i = rand() % 20;
 cout<<"Is your pet a "<<backup[i]<<"?"<<endl;
 string answer;
 getline(cin, answer);
 return answer;
};


/*void twentyQ::buildResponse(string userResponse) {//Might be " instead of '. I forget which symbol to use for a string.
	Pets *Phed = readPets();
	if ((userResponse == "yes") || (userResponse == "Yes") || (userResponse == "y") || (userResponse == "Y")) {
		matchup = 1;// allows us to compare response to preset responses in addCount
		//userArray[index] = 1;
		index++;
	}
	if ((userResponse == "no") || (userResponse == "No") || (userResponse == "n") || (userResponse == "N")) {
		matchup = 0;
		//userArray[index] = 0;
		index++;
	}
    cout<<index<<" index"<<endl;
	addCount(matchup, Phed, index);

}

*/
/*void twentyQ::addCount(int matchup, Pets *Phead, int index) { //adds count to pet struct
	Pets * traverse = new Pets;
	cout << "addcountstart" << endl;
	traverse = Phead;
	//cout << matchup << " matchup"<< endl;
	//cout << Phead->name << endl;

	while (traverse->next != NULL) {
		cout << traverse->ansArr[index+1] << "addcount while loop"<<endl; //breaking here

		int x = *traverse->ansArr[index - 1];
		if (matchup == x) //Has to be -1 because we incremented index in buildResponse
		{
			traverse->score = traverse->score + 1;
		}
		traverse = traverse->next;


	}


}*/
