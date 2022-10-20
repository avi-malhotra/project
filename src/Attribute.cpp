#include "Attribute.h"

#include <iostream>

// constructors
Attribute::Attribute() {
  int rates = 0;
}  // intialising the variable to 0

Attribute::Attribute(int _rates) {
  // data validation
  // the range for the rates is (0,10) = not inclusive
  if (_rates >= 0 && _rates <= 10) {
    rates = _rates;
  }

  else {
    // error message to be printing if input is outside of range
    std::cout << "Invalid rating. Setting to 0." << std::endl;
    rates = 0;
  }
}
// getters
int Attribute::get_rates() { return rates; }

// setters
void Attribute::set_rates(int _rates) {
  // data validation
  // the range for the rates is (0,10) = inclusive
  if (_rates >= 0 && _rates <= 10) {
    rates = _rates;
  }

  else {
    // error message to be printing if input is outside of range
    std::cout << "Invalid rating. Setting to 0." << std::endl;
    rates = 0;
  }
}

