#ifndef BRAND_HPP_
#define BRAND_HPP_

#include <iostream>
#include <string>

#include "Parts_base.hpp"

//    *****************************************************
//    To understand why some of the Orthodox Canonicals   *
//    are hidden, see explanation at the top of Parts.hpp *
//    *****************************************************

class Brand : virtual public Parts {
public:
  // Orthodox Canonical BEGINS
  Brand(const std::string &, const std::string &, const int8_t &) ;
  Brand(const Brand &) ;
  Brand(Brand &&) ;
  virtual ~Brand() ;
  // Orthodox Canonical ENDS

  // Getters Begins
  const std::string&  getBrand() ;
  // Getters Ends

  // Setters Begins
  void  setBrand(const std::string &) ;
  // Setters Ends

  virtual void print() const  = 0 ;

private:
  // Verbotene Orthodox Canonical BEGINS
  Brand() ;
  Brand &operator=(const Brand &) ;
  Brand &operator=(Brand &&) ;
  // Verbotene Orthodox Canonical ENDS
} ;

#endif  // BRAND_HPP_
