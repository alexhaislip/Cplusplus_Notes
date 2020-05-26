#include <iostream>
#include <string>
using namespace std;

int main() {

  double planet_Weight;
  double earth_Weight;
  double calc = earth_Weight * planet_Weight;

  cout << "What is your weight on earth? LBS : ";
  cin.clear();//you need to clear the flags before input
  getline (cin, earth_Weight);


  std::cout << "Choose a relative gravity for the planet in which you want to know your weight on : Planet Relative Gravity Earth = 1 , Venus	= 0.78 , Mars	= 0.39 , Jupiter	= 2.65 , Saturn	= 1.17 , Uranus	= 1.05 , Neptune	= 1.23:   \n";
  cin.clear();//you need to clear the flags before input
  getline (cin, planet_Weight);

  
  if (planet_Weight == 1) {
    cout << "Your weight on Earth is... " << calc; 
  } else if (planet_Weight == 0.39) {
    cout << "Your weight on Mars is... " << calc; 
  } else if (planet_Weight == 0.78) {
    cout << "Your weight on Venus is... " << calc; 
  } else if (planet_Weight == 2.65) {
    cout << "Your weight on Jupiter is... " << calc; 
  } else if (planet_Weight == 1.17) {
    cout << "Your weight on Saturn is... " << calc; 
  } else if (planet_Weight == 1.05) {
    cout << "Your weight on Uranus is... " << calc; 
  } else if (planet_Weight == 1.23) {
    cout << "Your weight on Neptune is... " << calc; 
  } else { 

    cout << "Your weight on this planet is Unknown... "; 

    
  }
  
}
