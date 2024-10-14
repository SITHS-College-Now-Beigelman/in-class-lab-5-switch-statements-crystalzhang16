//Crystal Zhang 
//10/08/2024
//Lab 5 Part 1

#include <iostream> 
#include <string> 
using namespace std; 

//include the variables it will need to use for this assignment (variables that user inputs)
int main () 
{
double minutes; //variable for user to input minutes
double weight; //variable for user to input weight
double calories; //variable for user to input calories
int exercise; //variable for user to input exercise they want in numerical form
 

//fixed variables
int walkingSlow = 2; //MET value for walking slowly
int walkingQuick = 3; //MET value for walking quickly
double jogging = 8.8; //MET value for jogging


//asking user to put in the numbers for the minutes and weight
cout << "What is your exercise duration in minutes?" << endl;
cin >> minutes; //allows user to input the minutes
cout << "What is your weight in kilograms?" << endl;
cin >> weight; //allows user to input their weight

//asks user what exercise they want to do 
cout << "What exercise do you wish to do? If wallking slowly press 1, if walking quickly press 2, if jogging press 3" << endl; 
cin >> exercise; //allows user to input what exercise they want to do in numerical form 

switch (exercise) //outputs a certain code depending what the user input 
{

case 1: //if they choose 1 (walking slowly) then output this code
//calculates how much calories are burned based on which activity is being done (walking slowly) using user inputted data as well as fixed data
cout << "If you exercise by walking slowly for " << minutes << " minutes, at " << weight << " kilograms. Then you will lose " << minutes * (walkingSlow * 3.5 * weight) / 200 << " calories." << endl;
cout << " " << endl;  //allows for the information displayed to appear more organized using a space between information
break;

case 2: //if they choose 2 (walking quickly) then output this code
cout << "If you exercise by walking quickly for " << minutes << " minutes, at " << weight << " kilograms. Then you will lose " << minutes * (walkingQuick * 3.5 * weight) / 200 << " calories." << endl; 
cout << " " << endl;  // allows for the information displayed to appear more organized using a space between information
break;

case 3: //if they choose 3 (jogging) then output this code
cout << "If you exercise by jogging for " << minutes << " minutes, at " << weight << " kilograms. Then you will lose " << minutes * (jogging * 3.5 * weight) / 200 << " calories." << endl; 
cout << " " << endl;  // allows for the information displayed to appear more organized using a space between information
break; 

default: 
cout << "Invalid exercise" << endl;
}

//extra credit section
cout << "How many calories do you want to burn?" << endl; //asks user to input data (how many calories they want to burn)
cin >> calories; //allows user to input data 

cout << "To lose " << calories << " calories, you will need to: " << endl; //prints a sentence starter for the data that will be displayed

cout << "Walk Slowly for " << (200*calories) / (2 * 3.5 * weight)<< " minute(s)"<< endl; 

cout << "Walk Quickly for " << (200*calories) / (3 * 3.5 * weight)<< " minute(s)" << endl; 

cout << "Jog for " << (200*calories) / (8.8 * 3.5 * weight)<< " minute(s)"<< endl;



return 0; 

/*
Output if:
exercise duration is 40 minutes 
weight is 40 kilograms 
desired calorie burn is 56 calories
exercise of desire for both is walking slowly

What is your exercise duration in minutes?
40
What is your weight in kilograms?
40
What exercise do you wish to do? If wallking slowly press 1, if walking quickly press 2, if jogging press 3
1
If you exercise by walking slowly for 40 minutes, at 40 kilograms. Then you will lose 56 calories.

How many calories do you want to burn?
56
What exercise do you wish to do? If wallking slowly press 1, if walking quickly press 2, if jogging press 3
1
To lose 56 calories, you will need to: 
Walk Slowly for 40 minute(s)
*/ 
}
