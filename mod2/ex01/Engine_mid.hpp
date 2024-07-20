#ifndef ENGINE_HPP_
#define ENGINE_HPP_

#include <iostream>
#include <string>

#include "Parts_base.hpp"

//    *****************************************************
//    To understand why some of the Orthodox Canonicals   *
//    are hidden, see explanation at the top of Parts.hpp *
//    *****************************************************

class Engine : virtual public Parts {
public:
  // Orthodox Canonical BEGINS
  Engine(const std::string &, const std::string &, const int8_t &) ;
  Engine(const Engine &) ;
  Engine(Engine &&) ;
  virtual ~Engine() ;
  // Orthodox Canonical ENDS

  // Getters Begins
  const std::string&  getEngine() ;
  // Getters Ends

  // Setters Begins
  void  setEngine(const std::string &) ;
  // Setters Ends

  virtual void print() const  = 0 ;

private:
  // Verbotene Orthodox Canonical BEGINS
  Engine() ;
  Engine &operator=(const Engine &) ;
  Engine &operator=(Engine &&) ;
  // Verbotene Orthodox Canonical ENDS
} ;

#endif // ENGINE_HPP_
