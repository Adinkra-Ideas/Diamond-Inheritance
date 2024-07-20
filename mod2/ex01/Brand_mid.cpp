#include "Brand_mid.hpp"

// *********************************
// ORTHODOX CANONICAL FORM BEGINS  *
// *********************************
Brand::Brand( const std::string & brand,
              const std::string & engine,
              const int8_t & wheel )
                        : Parts( brand, engine, wheel ) {
}

Brand::Brand( const Brand & rhs )  : Parts(rhs) {
}

Brand::Brand( Brand && rhs ) : Parts(std::move(rhs)) {
}

Brand::~Brand() {}
// *********************************
// ORTHODOX CANONICAL FORM ENDS    *
// *********************************


// ******************
//  GETTERS BEGINS  *
// ******************
const std::string&  Brand::getBrand() {
  return brand_ ;
}
// ******************
//  GETTERS ENDS    *
// ******************


// ******************
//  SETTERS BEGINS  *
// ******************
void  Brand::setBrand( const std::string & brand ) {
  brand_ = brand ;
}
// ******************
//  SETTERS ENDS    *
// ******************
