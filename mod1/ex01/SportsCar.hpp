#ifndef SPORTSCAR_HPP_
#define SPORTSCAR_HPP_

#include <sstream>
#include "Car.hpp"
#include "cr.hpp"

class SportsCar: public Car {
public:
  // Orthodox Canonical BEGINS
  SportsCar(const std::string &, const std::string &, const int16_t &, const int8_t &) ;
  SportsCar(const SportsCar &) ;
  SportsCar(SportsCar &&) ;
  ~SportsCar() ;
  // Orthodox Canonical ENDS

  // Getters Begins
  const int8_t&	getTopSpeed() const ;
  // Getters Ends

  // Setters Begins
  void	setTopSpeed(const int8_t& topSpeed) ;
  // Setters Ends

  void drive() const ;

private:
  int8_t _topSpeed ;

  SportsCar() ;
  SportsCar &operator=(const SportsCar &) ;
  SportsCar &operator=(SportsCar &&) ;
} ;

#endif // SPORTSCAR_HPP_
