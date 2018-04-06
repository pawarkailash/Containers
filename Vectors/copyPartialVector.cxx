#include <iostream>     // std::cout
#include <algorithm>    // std::copy
#include <vector>       // std::vector

//!
//! Show the contents of vector
//! Vector is passed as constant object (as refrence)
//! Note that const_iteartor is used for visitng its elemnts
//!
void showVector(const std::vector<int> &myvector) 
{
  std::cout << "Vector contains:";
  for (std::vector<int>::const_iterator it = myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
}


int main () {
  // myints is an array which we want to copy into a vector which is twice the
  // size of an array
  int myints[]={10,20,30,40,50};

  // Create a vector of fix size:
  std::vector<int> myvector(10);
  std::vector<int>::iterator it;

  // Initialize all the elements of vector with some value:
  myvector.assign(10,0);
  showVector(myvector);

  // How to copy an array to the second half of vector.
  // First get the starting iteartor of vector pointing to desired location
  // by setting: vector.begin() + loaction
  it = myvector.begin()+5;
  std::copy ( myints, myints+5, it);

  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it = myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
