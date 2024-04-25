#include <iostream>

using namespace std;

int main()
{
  int A[5];
  A[0] = 12;
  A[1] = 15;
  A[2] = 25;

  int B[] = {2, 4, 6, 8, 10};
  // You can skip the size of the array while initializing the array with the elements
  // and the size of the array will still be 5
  // sizeof(B) will also give us 20 as the total bytes of the array B

  int C[] = {2, 4, 6, 8, 10, 12, 14};
  // The total of bytes of the array C
  // is sizeof(C) which is

  int D[10] = {2, 4, 6, 8, 10, 12, 14, 16};
  // If you declare the array D of size 10
  // But you only initialize the array with 8 elements
  // So the values of the last two elements will be 0
  // cout << D[8] will give 0
  // printf("%d\n", D[9]); will give 0

  // initialize an array with zeros (0) as the value of all the elements
  int E[10] = {0};
  // The array E of size 10 is initialized with 0 as the value of the only element
  // There is no initialization for the value for the rest of the elements in the array
  // the default initialized value for the rest of the elements will be zero (0)
  // which makes E is the array of size 10 with zero (0) as the value of the rest the elements
  // cout << E[8] << endl; will give 0
  // printf("%d\n", E[9]); will give 0

  cout << sizeof(A) << endl; // 4 * 5 = 20 (4 bytes per each element, 5 elements in total)
  cout << sizeof(B) << endl; // 4 * 5 = 20
  cout << sizeof(C) << endl; // 4 * 7 = 28 (4 bytes per each element, 7 elements in total)
  cout << sizeof(D) << endl; // 4 * 10 = 40 (4 bytes per each element, 10 elements in total)
  cout << sizeof(E) << endl; // 4 * 10 = 40 (4 bytes per each element, 10 elements in total)

  cout << A[1] << endl; // this is a C++ function
  printf("%d\n", A[2]); // this is a C function

  cout << D[8] << endl;
  printf("%d\n", D[9]);

  cout << E[8] << endl;
  printf("%d\n", E[9]);
  // We are writing both cout (C++) and printf (C) code in the same C++ program
  // This shows the similarity and compatibility between the C and C++ languages
  // In case if the program does not read the C language, you can try to add <stdio.h> in the header

  int F[10] = {2, 4, 6, 8, 10, 12};

  // foreach loop in C++
  for (int x : F)
  { // x will take the values of all the elements in the array (10 elements)
    cout << x << endl;
  }

  // Create an array with custom size "n"
  // ask user to enter the size of the array
  int n;
  cout << "Enter array size"; // assume you input 4
  cin >> n;
  // int G[n] = {2,4,6,8,10,12}; // variable sized array (aka variable length array)
  // it is to create an array with custom size AND with some initialized elements
  // it is available in C language but NOT standard C++
  int G[n];
  G[0] = 2;

  for (int x : G)
  {
    cout << x << endl; // 2, 32759, 12365, 1
    // 2 is the value that you first initalized for the first element of the array
    // 32759, 12365, 1 are garbage values because you did not initialize them
    // garbage values are still values but they are not your values, they are the result of variable sized array
  }

  return 0;
}

