#include <iostream>
#include <memory>

#include "Car_top.hpp"

int main() {
  // Copy Constructor Test
  // {
  //   Car  obj{ "BMW", "V6", 14 } ;
  //   Car  obj2(obj) ;
  //   obj.print() ;
  //   obj2.print() ;
  // }

  // Move constructor test
  // {
  //   Car  obj{ "BMW", "V6", 14 } ;
  //   Car  obj2(std::move(obj)) ;
  //   obj.print() ;
  //   obj2.print() ;
  // }

  // Default test
  // {
  //   std::unique_ptr<Car>  obj{ std::make_unique<Car>("BMW", "V6", 14) } ;
  //   obj->print() ;
  // }

  // 
  {
    auto  obj{ std::make_unique<Car>("BMW", "V6", 14) } ;
    // obj->Engine::setEngine("V10") ; // access specified scope
    obj->setEngine("V10") ;
    obj->setBrand("Range") ;
    obj->setWheel(16) ;
    obj->print() ;
  }

  return 0 ;
}
