#include <iostream>

class Stack {

private:

  int top;
  int s[10];

public:

  Stack() {

    top = 0;

    for ( int i = 0; i < 10; i++ ) s[i] = 0;

  }

  void push(int i) {
    
    if ( top != 9 ) {

      s[top] = i;
      top++;

    }
    else {
      std::cerr << "Stack Overflow" << std::endl;
    }

  }

  int pop() {

    if ( top != 0 ) {

      int i = s[top];
      s[top] = 0;
      top--;
      return i;

    }
    else {
      std::cerr << "Stack Underflow" << std::endl;
      return 0;
    }

  }

  void Display() {

    for ( int i = 0; i < 10; i++ ) {

      if ( s[i] == 0 ) break;

      std::cout << s[i] << std::endl;
      
    }

    return;

  }

};

int main (int argc, char *argv[]) {


  
  return 0;

}
