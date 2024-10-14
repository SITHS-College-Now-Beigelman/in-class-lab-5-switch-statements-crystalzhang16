//Crystal Zhang 
//10/08/2024 
//Lab 5 Part 3 

#include <iostream> 
#include <ctime> 
#include <cstdlib>

using namespace std; 

int main () 
{ 
    int direct; //declaring variables for the directions
    int north = 0;
    int south = 0; 
    int east = 0; 
    int west = 0;

    srand(time(0));
    
    for (int i=1; i<=25; i++)
    {
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        //1 means North, 2 means South, 3 means East and 4 means West

        if (direct == 1) //if the random number generator ends up on 1, 1 meaning north, the robot's steps to north increases by one
            north = north + 1;

        else if (direct == 2) //if the random number generator ends up on 2, 2 meaning south, the robot's steps to south increases by one
            south = south + 1; 

        else if (direct == 3) //if the random number generator ends up on 3, 3 meaning east, the robot's steps to east increases by one
            east = east + 1; 

        else
            west = west + 1; 
        //if the random number generator doesn't end up on 1, 2, and 3, that means it ended up on 4, 4 meaning west, the robot's steps to west increases by one
    }

    cout << "The robot is " << north //prints out to the user how many steps the robot took in total; prints how many steps north the robot went
    << " blocks north from the starting point and " << south //prints how many steps south the robot went
    << " blocks south from the starting point " << east //prints how many steps east the robot went
    << " blocks east for the starting point " << west //prints how many steps west the robot went 
    << " blocks west from the starting point." << endl; 
        return 0; 

        //Output: The robot is 7 blocks north from the starting point and 5 blocks south from the starting point 7 blocks east for the starting point 6 blocks west from the starting point.

}

