#include <iostream>

int main(int argc, char *argv[]) {
  int x, y;
  std::cout << "please enter two numbers: ";
  std::cin >> x >> y;
  int sum = x + y;
  std::cout << "their sum is " << sum << std::endl;
  return 0;
}
