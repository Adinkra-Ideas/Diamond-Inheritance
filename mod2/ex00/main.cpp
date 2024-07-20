#include <iostream>
#include "Car.hpp"
#include "cr.hpp"
#include <memory>
#include <cassert>

void funcInMain(std::unique_ptr<Car> u_ptr_ref)
{
    cr::printOut(cr::GREEN, "funcInMain: " + u_ptr_ref->getName() ) ;
}

int main()
{
  // std::unique_ptr demonstration
  {
    std::unique_ptr<Car> u_ptr{ std::make_unique<Car>("Unique_BMW", 6) } ;

    std::unique_ptr<Car> & u_ptr_ref = u_ptr ; // pass by ref is allowed
    cr::printOut(cr::GREEN, "u_ptr ref car name: " + u_ptr_ref->getName() ) ;
    
    funcInMain(std::move(u_ptr)) ; // std::move is also possible
    assert(u_ptr == nullptr) ; // This assert will hold
  }

  // std::shared_ptr and std::weak_ptr demo
  std::weak_ptr<Car> w_ptr ;
  {
    
    std::shared_ptr<Car> s_ptr ;
    {
      std::shared_ptr<Car> s_ptr_scoped{ std::make_shared<Car>("Shared_BMW", 6) } ; // ref 1 to '' memory
      s_ptr = s_ptr_scoped ; // ref 2 to '' memory
    } 
    assert(s_ptr != nullptr) ; // this assert will still hold because 1 ref is still alive
    
    w_ptr = s_ptr ;
  }

  if ( w_ptr.expired() == true ) {
    cr::printOut(cr::GREEN, "This block will get executed") ;
    assert(w_ptr.lock() == nullptr) ; // This assert will hold because although w_ptr is useful, its live doesn't matter
  }
  
  return 0 ;
}
