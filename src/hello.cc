#include <iostream>

int main() {
  std::cout << "hello world~!!" << std::endl;

  int s = 0;
  for (int i = 0; i < 11; i++) {
    s += i;
  }

  std::cout << "Sum = " << s << std::endl;

  return 0;
}
