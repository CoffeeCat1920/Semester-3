#include <iostream>

class Temp {

private:

  int id[5];

public:

  void Assign() {

    for (int i = 0; i < 5; i++) {

      std::cin >> id[i];

    } 

  }

  void Display() {

    std::cout << "\n";

    for ( int i : id ) {

      std::cout << i << "\n";

    }

  }

};

int main (int argc, char *argv[]) {
  
  Temp temp;

  temp.Assign();
  temp.Display();

  return 0;
}
