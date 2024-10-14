//Crystal Zhang 
//10/08/2024 
//Lab 5 Part 3 Part 2

#include <iostream> 
#include <ctime>
#include <cstdlib>

using namespace std; 

int main () 
{ 
    int direct; //declaring the variable for which direction the robot goes 
    int north = 0; //declaring variables for the directions 
    int south = 0; 
    int east = 0; 
    int west = 0;
    int steps = 0; //declaring variable for total amount of steps the robot takes

    srand(time(0));
      while ((east != 2) || (north != 3)) //while east is not 2 or north is not three, this program would continue 
    {
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        //1 means North, 2 means South, 3 means East and 4 means West

        if (direct == 1) //if the random number generator lands on 1 (north) then one step is added to north and one step is added to the total amount of steps
           {
            north = north + 1;
            steps = steps + 1;
           }

        else if (direct == 2) //if the random number generator lands on 2 (south) then one step is added to south and one step is added to the total amount of steps
            {
            south = south + 1; 
            steps = steps + 1;
            }

        else if (direct == 3) //if the random number generator lands on 3 (east) then one step is added to east and one step is added to the total amount of steps
            {
            east = east + 1; 
            steps = steps + 1; 
            }

        else if (direct == 4) //if the random number generator lands on 4 (west) then one step is added to west and one step is added to the total amount of steps
            {
            west = west + 1;
            steps = steps + 1;
            }
    }
   
    cout << "It took the robot " << steps << " steps to move two blocks east and three blocks north. " << north << "north " << east << " east" << endl; 
    //prints how many trials/steps in total it took the the program to end if east was 2 or north was  3 
    
    return 0;

    //It took the robot 9 steps to move two blocks east and three blocks north. 3 north 2 east 
}
