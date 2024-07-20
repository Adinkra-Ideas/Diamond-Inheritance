#ifndef CAR_HPP_
#define CAR_HPP_

#include <string>
#include <sstream>
#include "cr.hpp"

class Car {

public:
  // Orthodox Canonical BEGINS
  Car(const std::string &, const std::string &, const int16_t &) ;
  Car(const Car &) ;
  Car(Car &&) ;
  virtual ~Car() ;
  // Orthodox Canonical ENDS

  // Getters Begins
  const std::string&  getMake() const ;
  const std::string&  getModel() const ;
  const int16_t&      getYear() const ;
  // Getters Ends

  // Setters Begins
  void    setMake(const std::string &) ;
  void    setModel(const std::string &) ;
  void    setYear(const int16_t &) ;
  // Setters Ends

  virtual void    drive() const = 0 ;

private:
  std::string _make ;
  std::string _model ;
  int16_t     _year ;

  Car() ;
  Car &operator=(const Car &) ;
  Car &operator=(Car &&) ;
} ;

#endif // CAR_HPP_
