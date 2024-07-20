#ifndef CAR_HPP_
#define CAR_HPP_

#include <iostream>
#include <memory>
#include <string>
#include <sstream>

#include "cr.hpp"
#include "Parts_base.hpp"
#include "Engine_mid.hpp"
#include "Brand_mid.hpp"
#include "Wheel_mid.hpp"

//    *****************************************************
//    To understand why some of the Orthodox Canonicals   *
//    are hidden, see explanation at the top of Parts.hpp *
//    *****************************************************

class Car : public Engine,
            public Brand,
            public Wheel {
public:
  // Orthodox Canonical BEGINS
  Car(const std::string &, const std::string &, const int8_t &) ;
  Car(const Car &) ;
  Car(Car &&) ;
  ~Car() ;
  // Orthodox Canonical ENDS

  void print() const override ;

private:
  // Verbotene Orthodox Canonical BEGINS
  Car() ;
  Car &operator=(const Car &) ;
  Car &operator=(Car &&) ;
  // Verbotene Orthodox Canonical ENDS
} ;

#endif  // CAR_HPP_
