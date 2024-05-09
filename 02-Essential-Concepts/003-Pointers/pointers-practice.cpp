#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// for the example of pointer of type structure
struct Rectangle {
  int length;
  int breadth;
};

// main program
int main()
{
  int a = 10;
  int *p;
  
  p = &a; // address of "a" is stored in pointer variable "p"
  
  cout << a << endl;
  // printf("using pointer %d \n", *p); // 10
  
  // printf("using pointer %d %d \n", p, &a);
  // print out memory address of "a"
  // "p" is a pointer pointing to the memory address that stores the value of variable "a" and "&a" is the memory address of "a"
  // "p" can be seen as an indirect alias of "a"
  // BUT "&a" is NOT an alias of "a"
  // both should have the same output because both are address of "a"
  
  /************** pointer to an array **************/
  
  // printing the array elements with the for loop
  int A[5] = {2,4,6,8,10};
  int *q;
  q = A;
  // q = &A[0]; // an alternative way to accessing the first element of the array
  
  for (int i = 0; i < 5; i++)
  // cout << A[i] << endl; // 2,4,6,8,10
  
  // accessing the array elements using pointer
  cout << q[i] << endl; // 2,4,6,8,10
  // "q" is a pointer which can act as the name of the array
  
  // printing the array elements with the foreach loop
  int B[5] = {1,3,5,7,9};
  int *r;
  r = &B[0];
  
  // printing the array elements with the foreach loop
  for (int j:B)
  cout << j << endl; // 1,3,5,7,9
  
  
  /************** creating array in heap **************/
  
  // Review: Whenever you declare anything in your program, it is going to be created inside the stack frame for that function.
  // Thus, the array was created in the stack when you first declared it in the program.
  // we can create an array in heap by using pointer

  int *s;
  s = (int *)malloc(5 * sizeof(int)); // C method
  
  // s = new int[5]; // C++ method. Dynamically create an array in heap
  // "int[5]" an array of 5 integers
  // "int[5]" will automatically convert into integer pointer and assign it to "p"
  
  // "s" is inside the stack
  // the array of 5 integers "5 * sizeof(int)" is inside the heap
  
  // initializing the array elements
  s[0] = 10; s[1] = 15; s[2] = 14; s[3] = 21; s[4] = 31;
  
  for (int i = 0; i < 5; i++)
  cout << s[i] << endl;
  
  free(s); // C method
  // delete [] s; // C++ method
  // the syntax for deleting the array is "delete[] pointer-variable"
  // if it is an array subscript then you must write down the subscript
  
  // Note: It is always a good practice to delete/free the memory space after finishing using it (at the end of the program).
  
  
  /************** example of multiple pointer types **************/
  
  int *t1;
  char *t2;
  float *t3;
  double *t4;
  struct Rectangle *t5;
  
  cout << sizeof(t1) << endl; // 8
  cout << sizeof(t2) << endl; // 8
  cout << sizeof(t3) << endl; // 8
  cout << sizeof(t4) << endl; // 8
  cout << sizeof(t5) << endl; // 8
  // Explain: Whatever the type of the pointer variable maybe in the latest compilers, the pointers are taking 8 bytes (64 bits machines).
  
  // Important thing about pointer
  // The size of the pointer variable is independent from its data type.
  
  return 0;
}