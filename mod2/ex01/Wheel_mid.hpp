#ifndef WHEEL_HPP__
#define WHEEL_HPP__

#include <iostream>
#include <string>
#include <memory>

#include "Parts_base.hpp"

//    *****************************************************
//    To understand why some of the Orthodox Canonicals   *
//    are hidden, see explanation at the top of Parts.hpp *
//    *****************************************************

class Wheel : virtual public Parts {
public:
  // Orthodox Canonical BEGINS
  Wheel(const std::string &, const std::string &, const int8_t &) ;
  Wheel(const Wheel &) ;
  Wheel(Wheel &&) ;
  virtual ~Wheel() ;
  // Orthodox Canonical ENDS

  // Getters Begins
  const std::shared_ptr<u_int8_t>&  getWheel() ;
  // Getters Ends

  // Setters Begins
  void  setWheel(const std::shared_ptr<u_int8_t> &) ;
  void  setWheel(const u_int8_t &) ;
  // Setters Ends

  virtual void print() const  = 0 ;

private:
  // Verbotene Orthodox Canonical BEGINS
  Wheel() ;
  Wheel &operator=(const Wheel &) ;
  Wheel &operator=(Wheel &&) ;
  // Verbotene Orthodox Canonical ENDS
} ;

#endif // WHEEL_HPP_
