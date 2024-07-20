#include "Engine_mid.hpp"

// *********************************
// ORTHODOX CANONICAL FORM BEGINS  *
// *********************************
Engine::Engine( const std::string & brand,
                const std::string & engine,
                const int8_t & wheel )
                          : Parts( brand, engine, wheel ) {
}

Engine::Engine( const Engine & rhs )  : Parts(rhs) {
}

Engine::Engine( Engine && rhs ) : Parts(std::move(rhs)) {
}

Engine::~Engine() {}
// *********************************
// ORTHODOX CANONICAL FORM ENDS    *
// *********************************


// ******************
//  GETTERS BEGINS  *
// ******************
const std::string&  Engine::getEngine() {
  return engine_ ;
}
// ******************
//  GETTERS ENDS    *
// ******************


// ******************
//  SETTERS BEGINS  *
// ******************
void  Engine::setEngine( const std::string & engine ) {
  engine_ = engine ;
}
// ******************
//  SETTERS ENDS    *
// ******************
