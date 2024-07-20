#include <iostream>
#include "Car.hpp"
#include "cr.hpp"

int main()
{
  {
    Car obj ;
    Car obj2{ obj } ;
  }

  Car obj3 ;
  obj3.setName("BMW") ;
  obj3.setSpeed(5) ;
  cr::printOut(cr::GREEN, obj3.getName()) ;
  cr::printOut(cr::GREEN, std::to_string(obj3.getSpeed())) ;

  return 0 ;
}
