#include <iostream>
#include "SportsCar.hpp"

// *********************************
// ORTHODOX CANONICAL FORM BEGINS  *
// *********************************

SportsCar::SportsCar(const std::string & make,
                    const std::string &model,
                    const int16_t & year,
                    const int8_t & topSpeed) : Car(make, model, year),
                                            _topSpeed(topSpeed) {
  cr::printOut(cr::YELLOW, "SportsCar Class Param'zed C'tor Called") ;
}


SportsCar::SportsCar(const SportsCar & rhs) : Car(rhs), 
                                              _topSpeed(rhs._topSpeed) {
  cr::printOut(cr::YELLOW, "SportsCar Copy C'tor Called") ;
}

SportsCar::SportsCar(SportsCar && rhs) : Car(rhs), 
                                              _topSpeed(rhs._topSpeed) {
  cr::printOut(cr::YELLOW, "SportsCar Move C'tor Called") ;
}

SportsCar::~SportsCar() {
  cr::printOut(cr::YELLOW, "SportsCar Destructor Called") ;
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
  ss << "Top Speed of " << getMake() + " " << getModel()
    << " is " <<  std::to_string(_topSpeed) 
    << std::endl ; 
  cr::printOut(cr::GREEN, ss.str()) ;
}
