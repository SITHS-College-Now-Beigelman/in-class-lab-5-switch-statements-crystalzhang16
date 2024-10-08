//Crystal Zhang 
//10/08/2024
//Lab 5 Part 2

#include <iostream> 
#include <string> 
using namespace std; 
int main () 
{
  //fixed values (how much megabytes is used in each hour)
  double lowQuality = 43.2;
  int normalQuality = 72;  
  double highQuality = 115.2;
  
  int quality;

  //used to convert gigabytes into megabytes (how many megabytes are in a gigabyte)
  int gigatomega = 1000; 

  //user given variable for how many gigabytes they have available
  double gigabytes; 

  //asks user to input gigabyte data 
  cout << "How many gigabytes is in your monthly hotspot plan?" << endl; 
  cin >> gigabytes; //allows user to input gigabyte data

  cout << "Do you wish to download Low Quality music, if yes input 2. If Normal quality, input 2. If High Quality, input 3." << endl; 
  cin >> quality; 

  cout << "Using " << gigabytes << " gigabytes, you can stream: " << endl; //starter sentence to introduce the output

  switch (quality) //outputs a certain code depnding which value user inputted for variable quality
  {
  //calculates how many hours of music can be streamed by multiplying the user given data with gigatomega to convert the gigabytes into megabytes and then dividing the product with how many megabytes is used with each hour of music depending on quality.
  
  case 1: //if they choose low quality (1) output this code
  cout << "Low Quality music for " << (gigabytes * gigatomega) / lowQuality << " hour(s)." << endl;
  break;
  
  case 2: //if they choose normal quality (2) output this code
  cout << "Normal Quality music for " << (gigabytes * gigatomega) / normalQuality << " hour(s)." << endl;
  break;

  case 3: //if they choose high quality (3) output this code 
  cout << "High Quality music for " << (gigabytes * gigatomega) / highQuality << " hour(s)." << endl;
  break;

  default: 
  cout << "That input is invalid, please choose a number from 1-3 next time" << endl; 
  }

  /* 
    Ouput if: 
    the monthly gigabytes is .0432 gigabytes 
    they choose low quality music 

    How many gigabytes is in your monthly hotspot plan?
    .432
    Do you wish to download Low Quality music, if yes input 2. If Normal quality, input 2. If High Quality, input 3.
    1
    Using 0.432 gigabytes, you can stream: 
    Low Quality music for 10 hour(s).
  */
return 0;
}