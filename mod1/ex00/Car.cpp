#include <iostream>
#include "Car.hpp"

// *********************************
// ORTHODOX CANONICAL FORM BEGINS  *
// *********************************
Car::Car(): _name(""), _speed(0) {
  cr::printOut(cr::YELLOW, "Default Constructor Called") ;
}

Car::Car(const std::string & name, const int8_t &speed) :  _name(name),
                                                          _speed(speed) {
}

Car::Car(const Car & rhs): _name(rhs._name), _speed(rhs._speed) {
  cr::printOut(cr::YELLOW, "Copy Constructor Called") ;
}

Car::Car(Car && rhs): _name(rhs._name), _speed(rhs._speed) {
  cr::printOut(cr::YELLOW, "Move Constructor Called") ;
}

Car::~Car() {
  cr::printOut(cr::YELLOW, "Destructor Called") ;
}
// *********************************
// ORTHODOX CANONICAL FORM ENDS    *
// *********************************


// ******************
//  GETTERS BEGINS  *
// ******************
const std::string& Car::getName() const {
  cr::printOut(cr::YELLOW, "getName() Called") ;
  return _name ;
}

const int8_t & Car::getSpeed() const {
  cr::printOut(cr::YELLOW, "getSpeed() Called") ;
  return _speed ;
}
// ******************
//  GETTERS ENDS    *
// ******************


// ******************
//  SETTERS BEGINS  *
// ******************
void    Car::setName(const std::string & name) {
  cr::printOut(cr::YELLOW, "setName() Called") ;
  _name = name ;
}

void    Car::setSpeed(const int8_t & speed) {
  cr::printOut(cr::YELLOW, "setSpeed() Called") ;
  _speed = speed ;
}
// ******************
//  SETTERS ENDS    *
// ******************
