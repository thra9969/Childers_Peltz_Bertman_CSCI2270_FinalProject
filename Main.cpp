/*
To play this game, ensure you have questions.txt downloaded, along with the twentyQ.cpp library file and 
the twentyQ.h header file. After you have everything in its right place, hit run and go crazy.
*/
#include "twentyQ.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

using namespace std;


int main() {
	twentyQ q;


	//q.readPets();
	//q.readQuestions();
	//q.buildHeads();
	int a = 1;
	while (a = 1) {
		string input = "";
		int choice;
		q.printMenu();
		cin >> choice;
		cin.clear();
		cin.ignore(10000, '\n');

		switch (choice)
		{
		case 1: { //print directions
			q.printDirections();
			break; }
		case 2: {
			q.printQuestions();
			break; }
		case 3: {
			string answer = q.backup();
			q.answerAnalysis(answer);
			cout<<"."<<endl;
			cout<<".."<<endl;
			cout<<"..."<<endl;
			cout<<"...."<<endl;
			cout<<"....."<<endl;
			cout<<"......"<<endl;
			cout<<"......."<<endl;
			cout<<"........"<<endl;
			cout<<".........."<<endl;
			cout<<"............"<<endl;
			cout<<".............."<<endl;
			cout<<"Ok. Now enter your favorite word"<<endl;
			getline(cin, answer);
			int x = answer.size();
			q.inspirationalquote(x);

			break;
		}

		case 4: {
			cout << "Goodbye!" << endl;
			exit(0); }

		default:{
			cout << "Invalid input. Please try again." << endl;
			break;
			}
		}

	}

	return 0;

}
