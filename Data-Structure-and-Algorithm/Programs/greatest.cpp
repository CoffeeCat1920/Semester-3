#include <iostream>

int main (int argc, char *argv[]) {
  
  int arr[10];

  
  for (int i = 0; i<10; i++ ) {

    std::cin >> arr[i];

  }

  int greatest = arr[0];

  for ( int i : arr ) {

    if ( i > greatest ) {

      greatest = i;

    }

  }

  std::cout << greatest << "\n";

  return 0;
}

