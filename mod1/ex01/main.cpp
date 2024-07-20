#include <iostream>
#include "Car.hpp"
#include "SportsCar.hpp"
#include "cr.hpp"

int main()
{
  Car obj ;
  obj.setMake("BMW") ;
  obj.setModel("X6") ;
  obj.setYear(2017) ;
  obj.drive() ;

  SportsCar deriv{ "BMW", "X8", 2018, 12 } ;
  deriv.drive() ;

  return 0 ;
}
