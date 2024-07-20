#include <iostream>
#include "Car.hpp"

// *********************************
// ORTHODOX CANONICAL FORM BEGINS  *
// *********************************
Car::Car(): _make(""), _model(""), _year(0) {
  cr::printOut(cr::YELLOW, "Base Class Default C'tor Called") ;
}

Car::Car(const std::string & make,
    const std::string & model,
    const int16_t & year) : _make(make),
                            _model(model),
                            _year(year) {
  cr::printOut(cr::YELLOW, "Base Class Param'zed C'tor Called") ;
}

Car::Car(const Car & rhs): _make(rhs._make), _model(rhs._model), _year(rhs._year) {
  cr::printOut(cr::YELLOW, "Base Class Copy C'tor Called") ;
}

Car::Car(Car && rhs): _make(rhs._make), _model(rhs._model), _year(rhs._year) {
  cr::printOut(cr::YELLOW, "Base Class Move C'tor Called") ;
}

Car::~Car() {
  cr::printOut(cr::YELLOW, "Base Class Destructor Called") ;
}
// *********************************
// ORTHODOX CANONICAL FORM ENDS    *
// *********************************


// ******************
//  GETTERS BEGINS  *
// ******************
const std::string& Car::getMake() const {
  cr::printOut(cr::YELLOW, "Base Class getMake() Called") ;
  return _make ;
}

const std::string& Car::getModel() const {
  cr::printOut(cr::YELLOW, "Base Class getModel() Called") ;
  return _model ;
}

const int16_t& Car::getYear() const {
  cr::printOut(cr::YELLOW, "Base Class getYear() Called") ;
  return _year ;
}
// ******************
//  GETTERS ENDS    *
// ******************


// ******************
//  SETTERS BEGINS  *
// ******************
void    Car::setMake(const std::string & make) {
  cr::printOut(cr::YELLOW, "Base Class setMake() Called") ;
  _make = make ;
}

void    Car::setModel(const std::string & model) {
  cr::printOut(cr::YELLOW, "Base Class setModel() Called") ;
  _model = model ;
}

void    Car::setYear(const int16_t & year) {
  cr::printOut(cr::YELLOW, "Base Class setYear() Called") ;
  _year = year ;
}
// ******************
//  SETTERS ENDS    *
// ******************


void    Car::drive() const {
  std::stringstream ss ;
  ss << "Driving " << _make << " " << _model << " " << _year ;
  cr::printOut(cr::GREEN, ss.str()) ;
}
