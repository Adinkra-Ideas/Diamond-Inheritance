#include "Parts_base.hpp"

// *********************************
// ORTHODOX CANONICAL FORM BEGINS  *
// *********************************
Parts::Parts( const std::string & brand,
              const std::string & engine,
              const int8_t & wheel )
                          : brand_( brand ),
                            engine_( engine ),
                            wheel_( std::make_shared<u_int8_t>(wheel) ) {
}

Parts::Parts( const Parts & rhs )  
                          : brand_( rhs.brand_ ),
                            engine_( rhs.engine_ ),
                            wheel_( std::make_shared<u_int8_t>(*rhs.wheel_)) {
}

Parts::Parts( Parts && rhs )  
                          : brand_( rhs.brand_ ),
                            engine_( rhs.engine_ ),
                            wheel_( std::make_shared<u_int8_t>(*rhs.wheel_)) {
  rhs.brand_.clear() ;         // 1 clear contents so size() == 0
  rhs.brand_.shrink_to_fit() ; // 2. release memory 

  rhs.engine_.clear() ;         // 1 clear contents so size() == 0
  rhs.engine_.shrink_to_fit() ; // 2. release memory 

  rhs.wheel_.reset() ;  // free the smart pointer memory

}

Parts::~Parts() {}
// *********************************
// ORTHODOX CANONICAL FORM ENDS    *
// *********************************
