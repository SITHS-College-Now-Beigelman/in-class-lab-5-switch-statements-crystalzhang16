//Crystal Zhang 
//10/08/2024 
//Lab 5 Part 3 

#include <iostream> 
#include <ctime>
#include <cstdlib.>

using namespace std; 

int main () 
{ 
    int direct;
    int north = 0;
    int south = 0; 
    int east = 0; 
    int west = 0;
    int steps = 0; 

    srand(time(0));
    
    /*
    for (int i=1; i<=25; i++)
    {
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        //1 means North, 2 means South, 3 means East and 4 means West

        if (direct == 1) 
            north = north + 1;

        else if (direct == 2) 
            south = south + 1; 

        else if (direct == 3) 
            east = east + 1; 

        else
            west = west + 1;
    }

    cout << "The robot is " << north 
    << " blocks north from the starting point and " << south 
    << " blocks south from the starting point " << east 
    << " blocks east for the starting point " << west 
    << " blocks west from the starting point." << endl; 
    */


      while ((east <= 2) && (north <= 3))
    {
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        //1 means North, 2 means South, 3 means East and 4 means West

        if ((direct == 1) && (north<3)) 
           {
            north = north + 1;
            steps = steps + 1;
           }

        else if (direct == 2) 
            {
            south = south + 1; 
            steps = steps + 1;
            }

        else if ((direct == 3) && (east<2)) 
            {
            east = east + 1;
            steps = steps + 1; 
            }

        else if(direct == 4)
            {
            west = west + 1;
            steps = steps + 1;
            }
    }
   
    cout << "It took the robot " << steps << " steps to move two blocks east and three blocks north" << north << west << east << south << endl; 
    return 0;
}