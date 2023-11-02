// Liam De Jong
// liamdejong@csu.fullerton.edu
// @ldejong20
// Partners: @FullNoe @23bnguyen1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum = 0.0;
  for (int i = 1; i < argc; i++) {
    sum += std::stod(argv[i]);
  }

  double average = sum / (argc - 1);
  std::cout << "Average = " << average << "\n";

  return 0;
}