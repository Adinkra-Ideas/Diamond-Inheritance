#ifndef CAR_HPP_
#define CAR_HPP_

#include <string>
#include "cr.hpp"

class Car {
public:
  // Orthodox Canonical BEGINS
  Car() ;
  Car(const std::string &, const int8_t &) ;
  Car(const Car &) ;
  Car(Car &&) ;
  ~Car() ;
  // Orthodox Canonical ENDS

  // Getters Begins
  const std::string&  getName() const ;
  const int8_t&	      getSpeed() const ;
  // Getters Ends

  // Setters Begins
  void    setName(const std::string &) ;
  void    setSpeed(const int8_t &) ;
  // Setters Ends

private:
  std::string _name ;
  int8_t      _speed ;

  Car &operator=(const Car &) ;
  Car &operator=(Car &) ;
} ;

#endif // CAR_HPP_
