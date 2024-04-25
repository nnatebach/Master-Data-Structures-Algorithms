## Lesson Content
### Declare and initialize element in an array<br>
<br>

```
int A[10] = {2,4,6,8,10};
```
<br>
There are 10 elements in the array<br>
<br>

### Declare an array without size<br>
<br>

```
int A[] = {2,4,6,8,10};
```
<br>
There are 5 elements in the array<br>
<br>

**The number of the total bytes the array take will be calculated based on the total number of elements that the array carries.**

<br>
Example:<br>
Since each element takes 4 bytes<br>
<br>

```
int A[10] = {2,4,6,8,10};
```
=> 10 elements => sizeof(A) = 40 bytes
<br>

```
int A[] = {2,4,6,8,10};
```

=> 5 elements => sizeof(A) = 20 bytes
<br>

### Default array value

```
int A[10] = {0};

for (int i : A) {
  cout << i << endl; // 0000000000 - 10 zeros
}
```

#### Explain:
The default value of an array element is 0 (zero). For an array of size 10, the element that is not initialized with any value will have the default value of zero (0). The above code is an example of an array of zero values.
<br>
### "for" loop in C++
<br>

```
int i;
for (i = 0; i < 10; i++) {
  cout << A[i] << endl;
}
```

#### Explain:
1. initially i starts from 0
2. then the program checks if i (0) is less than 5
3. then it will print B[0], the first element in the array
4. after printing B[0], with i++ then i becomes 1
5. the program will then check whether 1 is less than 5
6. and the program will continue printing up to B[4] for all the array element

<br>

### "foreach" loop in C++
<br>

```
for (int i : A) {
  cout << i << endl;
}
```
<br>

#### Explain:
1. "i" is the variable that stores the value of the current array element
2. A is the array name which also serves as the base address of the respective array.
3. Printing ‘i’ for each iteration gives us the corresponding array elements.

<br>

**The size of the array can never be smaller than the number of elements in the array.**

```
int A[4] = {1,2,3,4,5,6,7};
```

=> ERROR: Excess elements in array initializer<br>
<br>

### Declare an array with a custom size from the user
<br>

```
int n;
cout << "Enter the size of the array" << endl;
cin >> n; // Assume the user input 4
int A[n];
A[0] = 2;
A[1] = 4;

for (int i : A) {
  cout << i << endl; // 2, 4, 2054652532, 21853

  // Garbage values: 2054652532, 21853
}
```
<br>

**NOTE: It is not possible to initialize values for the elements of a variable sized (aka variable length) array in standard C++**

<br>

**Variable sized array is not a good practice because the result will give garbage values which are the values that you did not initialize.**

<br>

#### Purpose of for loop in C++:
1. for loop is for scanning through all the elements in the array.
2. we use for loop most of the time for accessing all the elements of an array.

<br>

## Further research

### Infinite for loop in C++
<br>

```
for (;;) {
  cout << "Hello World" << std::endl;
}
```

<br>

#### Explain:
There is **no condition** hence, this loop will execute **infinite** times.
