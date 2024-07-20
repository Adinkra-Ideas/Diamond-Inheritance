#include <iostream>
#include "SportsCar.hpp"
#include "NotSportsCar.hpp"
#include "cr.hpp"

int main()
{
  SportsCar sc{ "SportsCar", "F1", 2018, 12 } ;
  sc.drive() ;

  NotSportsCar nsc{ "NotSportsCar", "N0", 1999, 3 } ;
  nsc.drive() ;

  return 0 ;
}

// Modularity: The practice of dividing your code into smaller, independent, and cohesive units that perform specific tasks or functions.

// Inheritance: Mechanism of reusing and extending existing classes without modifying them,
