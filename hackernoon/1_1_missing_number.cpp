#include <iostream>
#include <vector>

#include "vendor/cxx_argp_parser.h"


int main(int argc, char* argv[]) {
  cxx_argp::parser parser;

  std::vector<int> input;
  parser.add_option({"vector", 'n', "numbers", 0, ""}, input);

  if (parser.parse(argc, argv)) {
    std::cerr << "parsing OK\n";
  } else {
    std::cerr << "there was an error - exiting\n";
    return 1;
  }




  return 0;
}
