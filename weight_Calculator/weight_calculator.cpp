//©Alexander Haislip, Wednesday March 27th 2020 
#include <iostream>
#include <string>
using namespace std;

// Function that calculates your weight on another planet
double calc(double earthWeight, double rel) {
  return earthWeight * rel;
}

int main() {

  double planet_Weight;
  double earth_Weight;

//This will take input from the user asking their current earth weight.
  cout << "What is your weight on earth? LBS : ";
  cin >> earth_Weight;

  int planet;
  std::cout << "Choose a planet in which you want to know your weight on :\n";
  std::cout << "Mars => 1\nVenus => 2\nJupiter => 3\nSaturn	=> 4\nUranus => 5\nNeptune => 6\n";
  cin >> planet;

  double planetMultiplier;
  string planetName;
  
  switch(planet) {
    case 1 : // Mars
      planetMultiplier = 0.78;
      planetName = "Mars";
      break;
    case 2 : // Venus
      planetMultiplier = 2.65;
      planetName = "Venus";
      break;
    case 3 : // Jupiter
      planetMultiplier = 1.17;
      planetName = "Jupiter";
      break; 
    case 4 : // Saturn
      planetMultiplier = 1.05;
      planetName = "Saturn";
      break;
    case 5 : // Uranus
      planetMultiplier = 1.23;
      planetName = "Uranus";
      break;
    case 6 : // Neptune
      planetMultiplier = 0.17;
      planetName = "Neptune";
      break;


  }

  double newWeight = calc(earth_Weight, planetMultiplier);
  cout << "Your weight on " << planetName << " is " << newWeight << endl;
   
}
  

