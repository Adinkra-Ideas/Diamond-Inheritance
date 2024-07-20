#include <iostream>
#include "SportsCar.hpp"

// *********************************
// ORTHODOX CANONICAL FORM BEGINS  *
// *********************************
SportsCar::SportsCar() : Car(), _topSpeed(0) {
  cr::printOut(cr::YELLOW, "Derived SportsCar Class Default C'tor Called") ;
}

SportsCar::SportsCar(const std::string & make,
                    const std::string &model,
                    const int16_t & year,
                    const int8_t & topSpeed) : Car(make, model, year),
                                            _topSpeed(topSpeed) {
  cr::printOut(cr::YELLOW, "Derived SportsCar Class Param'zed C'tor Called") ;
}

SportsCar::SportsCar(const SportsCar & rhs) : Car(rhs), 
                                              _topSpeed(rhs._topSpeed) {
  cr::printOut(cr::YELLOW, "Derived SportsCar Class Copy C'tor Called") ;
}

SportsCar::SportsCar(SportsCar && rhs) : Car(rhs), 
                                              _topSpeed(rhs._topSpeed) {
  cr::printOut(cr::YELLOW, "Derived SportsCar Class Move C'tor Called") ;
}

SportsCar::~SportsCar() {
  cr::printOut(cr::YELLOW, "Derived SportsCar Class Destructor Called") ;
}
// *********************************
// ORTHODOX CANONICAL FORM ENDS    *
// *********************************


// ******************
//  GETTERS BEGINS  *
// ******************
const int8_t&	SportsCar::getTopSpeed() const {
  cr::printOut(cr::YELLOW, "SportsCar getTopSpeed() Called") ;
  return _topSpeed ;
}
// ******************
//  GETTERS ENDS    *
// ******************

// ******************
//  SETTERS BEGINS  *
// ******************
void SportsCar::setTopSpeed(const int8_t& topSpeed) {
    cr::printOut(cr::YELLOW, "SportsCar getTopSpeed() Called") ;
    _topSpeed = topSpeed ;
}
// ******************
//  SETTERS ENDS    *
// ******************


void SportsCar::drive() const {
  std::stringstream ss ;
  ss << "Top Speed " << std::to_string(_topSpeed) << std::endl ; 

  cr::printOut(cr::GREEN, ss.str()) ;
  Car::drive() ;
}
