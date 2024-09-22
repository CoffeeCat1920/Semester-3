#include <cstdio>
#include <iostream>

int main (int argc, char *argv[]) {

  int array[5] = { 2, 4, 6, 8, 10 };

  int item = 8;

  for ( int i = 0; i < 5; i++ ) {

    if ( array[i] == item ) {

      std::cout << "Location Found = " << i << std::endl;
      getchar();
      return 0;

    }  

  }

  std::cout << "Location no found \n";
  getchar();

  return 0;

}
