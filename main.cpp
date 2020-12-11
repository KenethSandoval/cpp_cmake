#include <iostream>
#include <cstdlib>

#include "helper.h"

int main(int argc, char const* argv[]) {
  std::cout << "Hello, World\n";
  
  if(argc > 1)
     std::cout << signum(argc) << "\n";
  else
     std::cout << signum(-argc) << "\n";

  return EXIT_SUCCESS;
}
