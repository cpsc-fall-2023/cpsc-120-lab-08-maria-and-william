// William Dam
// wdam1@csu.fullerton.edu
// @williamdam123
// Partners: @williamdam123, @mariaduarte12
//
// Lab 8
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double total = 0.0;
  int count = 0;
  bool skip = false;

  for (std::string const& argument : arguments) {
    if (!skip) {
      skip = true;
      continue;
    }
    total += std::stod(argument);
    count++;
  }
  double average = total / count;
  std::cout << "average = " << average << "\n";
  return 0;
}