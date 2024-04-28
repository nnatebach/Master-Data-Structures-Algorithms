#include <iostream>

using namespace std;

// declare a struct Rectangle

// 1. Define a struct
struct Rectangle
{
  int length;
  int breadth;
  char x;
};

// 2. Declare a struct

int main()
{
  // struct Rectangle r1; // Option 1: Local variable

  // declare struct and initialize members
  struct Rectangle r1 = {10, 5};
  printf("%d", sizeof(r1)); // 12 (bytes) - Reason: Structure padding
  // The computer will pick up 4 bytes but only use 1 byte.

  return 0;
}