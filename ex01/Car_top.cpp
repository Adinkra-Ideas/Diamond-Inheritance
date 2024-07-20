#include "Car_top.hpp"

// *********************************
// ORTHODOX CANONICAL FORM BEGINS  *
// *********************************
Car::Car( const std::string & brand,
          const std::string & engine,
          const int8_t & wheel )
                    : Parts( brand, engine, wheel ),
                      Engine( brand, engine, wheel ),
                      Brand( brand, engine, wheel ),
                      Wheel( brand, engine, wheel ) {
}

Car::Car( const Car & rhs )  :  Parts(rhs),
                                Engine(rhs),
                                Brand(rhs),
                                Wheel(rhs) {
}

Car::Car( Car && rhs ) :  Parts(std::move(rhs)),
                          Engine(std::move(rhs)),
                          Brand(std::move(rhs)),
                          Wheel(std::move(rhs)) {
}

Car::~Car() {}
// *********************************
// ORTHODOX CANONICAL FORM ENDS    *
// *********************************


void Car::print() const {
  std::ostringstream os ;

  os << "General Info For " << brand_ << " " << engine_ ;
  cr::printOut(cr::YELLOW, os.str()) ; 

  os.str("") ;
  cr::printOut(cr::WHITE, "Brand: ", false) ;
  cr::printOut(cr::MAGENTA, brand_, false) ;
  cr::printOut(cr::WHITE, ",") ;

  cr::printOut(cr::WHITE, "Engine: ", false) ;
  cr::printOut(cr::MAGENTA, engine_, false) ;
  cr::printOut(cr::WHITE, ",") ;

  cr::printOut(cr::WHITE, "Wheel: ", false) ;
  cr::printOut(cr::MAGENTA, std::to_string(*wheel_)) ;

  cr::printOut(cr::BLUE, "Goodbye ", false) ;
  cr::printOut(cr::YELLOW, "Au revoir ", false) ;
  cr::printOut(cr::MAGENTA, "再见") ;
}
