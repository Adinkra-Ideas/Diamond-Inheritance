#ifndef PARTS_HPP_
#define PARTS_HPP_

#include <iostream>
#include <memory>
#include <string>

//    ************************************************
//    The reasoning for deactivating the Copy/Move   *
//    Assignment Operators is to prevent an instance *
//    that is already running from being used to     *
//    replace another already-running instance.      *
//    ************************************************

class Parts {
public:
  // Orthodox Canonical BEGINS
  Parts(const std::string &, const std::string &, const int8_t &) ;
  Parts(const Parts &) ;
  Parts(Parts &&) ;
  virtual ~Parts() ;
  // Orthodox Canonical ENDS

  virtual void print() const  = 0 ;

private:
  // Verbotene Orthodox Canonical BEGINS
  Parts() ;
  Parts &operator=(const Parts &) ;
  Parts &operator=(Parts &&) ;
  // Verbotene Orthodox Canonical ENDS

protected:
  std::string                 brand_ ;
  std::string                 engine_ ;
  std::shared_ptr<u_int8_t>   wheel_ ;
} ;

#endif // PARTS_HPP_
