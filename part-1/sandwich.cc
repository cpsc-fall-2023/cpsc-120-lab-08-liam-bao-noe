// Bao Nguyen
// 23bnguyen1@csu.fullerton.edu
// @23bnguyen1
// Partners: @ldejong20 @FullNoe

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }
  std::string protein(arguments.at(1));
  std::string bread(arguments.at(2));
  std::string condiments(arguments.at(3));
  std::cout << "Your order:\n"
            << "A " << protein << "sandwich on " << bread << "with "
            << condiments << ".\n";
  return 0;
}
