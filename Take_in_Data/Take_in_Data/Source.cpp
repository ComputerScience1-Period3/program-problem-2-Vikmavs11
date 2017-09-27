/*Vikram Basude - 9-25-17
Assigment name: Take in Data
Taking in data*/
// Libraries
#include <iostream> // gives access to cin and stuff
#include <conio.h> // gives access to _kbhit
//Namespaces
using namespace std; //*
void pause() {
	cout << "press any key to continue . . .";
	while (!_kbhit());
			_getch();
	cout << '\n';
}

//MAIN
void main() {
	//Variables
	int sports; // How many sports do they play??
	char first_letter; // Are you in or not?
	// void doesnt hold value
	double percentage_of_people; // What is your GPA
	bool played_water_polo;
	// User Queries
	cout << "How many sports have you played in your lifetime?";
		cin >> sports;
		cout << "What is the first letter of the country you are from (Upper Case)";
	cin >> first_letter;
	cout << "Have you played water polo (1) or not (0) : (1/0)";
	cin >> played_water_polo;
	cout << "What percentage of people do you think play water polo (in decimal form): ";
	cin >> percentage_of_people;


	// After questions print out stored data 
	cout << "The number of sports you play is" << sports << endl; // ENDL
	cout << "Your first letter of your country is " << first_letter << '\n'; // different ways of going to the new line
	cout << boolalpha << "If you've played water polo" << played_water_polo << " that you have played water polo. \n";
	cout << "People you think have played water polo : " << percentage_of_people << "\n";


	
	// Pause
	pause();
}
