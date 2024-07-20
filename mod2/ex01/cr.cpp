#include "cr.hpp"

namespace cr {

  const char *RESET_COLOR = "\033[0m" ;
  const char *RED = "\033[1;31m" ;
  const char *GREEN = "\033[1;32m" ;
  const char *YELLOW = "\033[1;33m" ;
  const char *MAGENTA = "\033[1;35m" ;
  const char *WHITE = "\033[1;37m" ;
  const char *BLUE = "\033[1;34m" ;

/**
  * Prints out texts in terminal using Custom Colors
  * @param color is used to set color of text to be printed.
  ** Macros have been defined for popular color codes in cr::
  * @param texts is the actual texts to be printed.
  * @param EOL is a default parameter set to true.
  ** It is used to determine if line break will be added
  ** after printing texts.
  * @param stream is a default parameter set to true.
  ** It is used to determine which output stream to print texts.
  ** If false, texts will be printed to stderr.
  * @returns void
  */
void	printOut(const char * color, const std::string & texts, bool EOL, bool stream) {
    if ( stream ) {
        std::cout << color
                  << texts
                  << cr::RESET_COLOR
                  << ((EOL) ? "\n" : "") ;
    } else {
        std::cerr << color
                  << texts
                  << cr::RESET_COLOR
                  << ((EOL) ? "\n" : "") ;
    }
}

} // namespace cr