#ifndef CR_HPP_
#define CR_HPP_

#include <iostream>
#include <string>

namespace cr {

extern const char  *RESET_COLOR ;
extern const char  *RED ;
extern const char  *GREEN ;
extern const char  *YELLOW ;
extern const char  *MAGENTA ;

void	printOut(const char *, const std::string&, bool EOL = true, bool stream = true) ;

} // namespace cr

#endif // CR_HPP_