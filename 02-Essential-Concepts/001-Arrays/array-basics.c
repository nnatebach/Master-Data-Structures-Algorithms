// When an array is declared/initialized, it will be created in the stack of the main memory

// Declare an array of 5 elements
int A[5];

// Declare and initialize an array
int B[5] = {2,4,6,8,10};

int main () {
  // Print all elements in an array using for loop
  // 1. Declare variable i
  int i;

  // 2. for loop
  for (i = 0; i < 5; i++) {
    printf("%d", B[i]);
  }

  // initially i starts from 0
  // then the program checks if i (0) is less than 5
  // then it will print B[0], the first element in the array
  // after printing B[0], with i++ then i becomes 1
  // the program will then check whether 1 is less than 5
  // and the program will continue printing up to B[4] for all the array element

  // for loop is for scanning through all the elements in the array
  // we use for loop most of the time for accessing all the elements of an array
}
