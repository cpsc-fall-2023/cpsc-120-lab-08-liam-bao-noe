// Bao Nguyen
// 23bnguyen1@csu.fullerton.edu
// @23bnguyen1
// Partners: @ldejong20 @FullNoe

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
std::vector<std::string> arguments{argv, argv + argc};
if (arguments.size() < 2) {
std::cout << "error: you must supply at least one number\n";
return 1;
}
// TODO: Validate that there is at least one command line argument.
// If not, print an error message and return a non-zero value.
// TODO: Write a for-each loop to sum (add up) all of the command line
// arguments.
// Use a double or float type so that your program preserves fractional
// values.
// The loop needs to skip over the command name, which is the first element
// of the arguments vector.
// Each argument is a std::string. You will need to convert each string into
// a number with the std::stod or std::stof function.
for (std::string argument : arguments) {
double num{0.0};
num = std::string(stoi(arguments));
double sum_of_total_numbers{0.0};
sum_of_total_numbers{argument + argument + argument};
return 0;
}
// TODO: After the loop has finished summing the arguments, calculate the
// average of the values. Recall that the average is the total value divided
// by the number of values.
double total_num{0.0};
double average{sum_of_total_numbers / total_num};
// TODO: Use cout to print out a message of the form
// average = *AVERAGE*
// on its own line.
std::cout << "Average = " << average << "\n";
return 0;
}