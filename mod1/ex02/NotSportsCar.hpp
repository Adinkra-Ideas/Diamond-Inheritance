#ifndef NOTSPORTSCAR_HPP_
#define NOTSPORTSCAR_HPP_

#include <sstream>
#include "Car.hpp"
#include "cr.hpp"

class NotSportsCar: public Car {
public:
  // Orthodox Canonical BEGINS
  NotSportsCar(const std::string &, const std::string &, const int16_t &, const int8_t &) ;
  NotSportsCar(const NotSportsCar &) ;
  NotSportsCar(NotSportsCar &&) ;
  ~NotSportsCar() ;
  // Orthodox Canonical ENDS

  // Getters Begins
  const int8_t&	getTopSpeed() const ;
  // Getters Ends

  // Setters Begins
  void	setTopSpeed(const int8_t& topSpeed) ;
  // Setters Ends

  void drive() const override ;

private:
  int8_t _topSpeed ;

  NotSportsCar() ;
  NotSportsCar &operator=(const NotSportsCar &) ;
  NotSportsCar &operator=(NotSportsCar &&) ;
} ;

#endif // NOTSPORTSCAR_HPP_
