#include <iostream>
#include "NotSportsCar.hpp"

// *********************************
// ORTHODOX CANONICAL FORM BEGINS  *
// *********************************

NotSportsCar::NotSportsCar(const std::string & make,
                    const std::string & model,
                    const int16_t & year,
                    const int8_t & topSpeed) : Car(make, model, year),
                                            _topSpeed(topSpeed) {
  cr::printOut(cr::YELLOW, "NotSportsCar Class Param'zed C'tor Called") ;
}


NotSportsCar::NotSportsCar(const NotSportsCar & rhs) : Car(rhs), 
                                              _topSpeed(rhs._topSpeed) {
  cr::printOut(cr::YELLOW, "NotSportsCar Copy C'tor Called") ;
}

NotSportsCar::NotSportsCar(NotSportsCar && rhs) : Car(rhs), 
                                              _topSpeed(rhs._topSpeed) {
  cr::printOut(cr::YELLOW, "NotSportsCar Move C'tor Called") ;
}

NotSportsCar::~NotSportsCar() {
  cr::printOut(cr::YELLOW, "NotSportsCar Destructor Called") ;
}
// *********************************
// ORTHODOX CANONICAL FORM ENDS    *
// *********************************


// ******************
//  GETTERS BEGINS  *
// ******************
const int8_t&	NotSportsCar::getTopSpeed() const {
  cr::printOut(cr::YELLOW, "NotSportsCar getTopSpeed() Called") ;
  return _topSpeed ;
}
// ******************
//  GETTERS ENDS    *
// ******************


// ******************
//  SETTERS BEGINS  *
// ******************
void NotSportsCar::setTopSpeed(const int8_t& topSpeed) {
    cr::printOut(cr::YELLOW, "NotSportsCar getTopSpeed() Called") ;
    _topSpeed = topSpeed ;
}
// ******************
//  SETTERS ENDS    *
// ******************


void NotSportsCar::drive() const {
  std::stringstream ss ;
  ss << "Top Speed of " << getMake() + " " << getModel()
    << " is " <<  std::to_string(_topSpeed) 
    << std::endl ; 
  cr::printOut(cr::GREEN, ss.str()) ;
}
