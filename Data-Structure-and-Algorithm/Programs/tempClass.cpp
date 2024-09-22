#include <cstdlib>
#include <iostream>

class Temp {

private:

  int id[5] = {1, 2, 3, 4, 5};

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

  void insert( int value, int position ) {
    

    for ( int i = 4; i > position; i-- ) {
      
      id [ i ] = id[i-1];

    }

    id [position] = value;


    //int n = 4;

    //while ( n  >= position ) {
    //  id[n+1] = id[n];
    //  n--;
    //}

    //id[position] = value;

  }

  void remove( int index ) {
    
    for ( int i = index; i < 4; i++ ) {

      id[i] = id[i+1];

    }

    id[4] = 0;

  }

};

int main (int argc, char *argv[]) {
  
  Temp temp;

  temp.insert(0, 4);
  temp.Display();

  return 0;
}
