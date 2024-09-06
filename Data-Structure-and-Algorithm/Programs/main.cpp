#include <iostream>

int main (int argc, char *argv[]) {
  
  int array[5];
  int sum = 0;

  for (int i = 0; i<5; i++ ) {

    std::cin >> array[i];

  }

  for (int i = 0; i<5; i++ ) {
    
    sum += array[i];

  }

  std::cout << "\n" << sum << "\n"; 

  return 0;
}
