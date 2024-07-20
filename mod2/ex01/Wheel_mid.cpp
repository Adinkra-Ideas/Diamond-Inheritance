#include "Wheel_mid.hpp"

// *********************************
// ORTHODOX CANONICAL FORM BEGINS  *
// *********************************
Wheel::Wheel( const std::string & brand,
              const std::string & engine,
              const int8_t & wheel )
                        : Parts( brand, engine, wheel ) {
}

Wheel::Wheel( const Wheel & rhs )  : Parts(rhs) {
}

Wheel::Wheel( Wheel && rhs ) : Parts(std::move(rhs)) {
}

Wheel::~Wheel() {}
// *********************************
// ORTHODOX CANONICAL FORM ENDS    *
// *********************************


// ******************
//  GETTERS BEGINS  *
// ******************
const std::shared_ptr<u_int8_t>&  Wheel::getWheel() {
  return wheel_ ;
}
// ******************
//  GETTERS ENDS    *
// ******************


// ******************
//  SETTERS BEGINS  *
// ******************
void  Wheel::setWheel( const std::shared_ptr<u_int8_t> & wheel ) {
  wheel_ = wheel ;
}

void  Wheel::setWheel( const u_int8_t & wheel ) {
  *wheel_ = wheel ;
}
// ******************
//  SETTERS ENDS    *
// ******************
