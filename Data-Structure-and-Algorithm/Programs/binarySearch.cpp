#include <iostream>

int array[5] = {2, 4, 6, 8, 10};

int binarySearch( int item ) {

  int location = -1;

  int start = 0, end = 4;

  int mid;

  while ( start <= end ) {

    mid = start + end / 2;

    std::cout << start << " " << end << " " << mid << "\n";
 
    if ( array[mid] == item ) {
      location =  mid; 
      break;
    }
    else if ( array[mid] > item ) {

      end = mid - 1;

    }
    else {

      start = mid + 1;

    }

  }

  return location;

}

int main (int argc, char *argv[]) {

  int loc = binarySearch(8);

  if ( loc != -1 ) std::cout << "Location = " << loc << std::endl;
  else std::cout << "Location not found" << std::endl;
  
  return 0;

}
