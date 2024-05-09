### LESSON CONTENT
#### 1. Accessing memory address and value of variable with pointer
#### 2. Pointer to an array
#### 3. Creating array in heap
#### 4. Value of multiple pointers

======================

#### 1. Accessing memory address and value of variable with pointer

```
int a = 10;
int *p;

p = &a;

cout << a << endl;
```
**Explanation:**

- This assignment

    ```
    p = &a;
    ```

    means that the address of variable "a" is stored in pointer variable "p"

    **Note:**
    - when we assign the address we don't have to rewrite the asterisk "*", otherwise the compiler will not understand.
    - the asterisk is only at the time of declaration and <a href="https://www.w3schools.com/cpp/cpp_pointers_dereference.asp">dereferencing</a> the variable.

- Printing the value<br>
There will be *printf* for C and *cout* for C++ methods
    - Using the variable name

        ```
        cout << a << endl;
        ```
        Output: 10

    - Using the pointer

        ```
        printf("using pointer %d \n", *p);
        ```
        Output: 10<br>
        Reason: "p" was declared a pointer variable which pointed to the address of variable "a" in the memory. By *dereferencing* pointer variable "p" with the "asterisk", we can access the value stored at the memory address of variable "a" which is "10".
        <br>
        Example: Printing out "p" and "&a"

        ```
        printf("using pointer %d %d \n", p, &a);
        ```
        Output: Memory address of variable "a" (the hex code varies based on different computer).<br>
        **Warning:**
        ```
        format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘int*’
        format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘int*’
        ```
        Arguments 2 and 3 here are "p" and "&a"

#### 2. Pointer to an array
- printing the array elements with the "for" loop (C method)

    ```
    int A[5] = {2,4,6,8,10};
    int *q;
    q = A;
    ```
    There are two ways to access the first element of the array.<br>
    You can use either
    ```
    q = A;
    ```
    or
    ```
    q = &A[0];
    ```
    The syntaxes are different yet both will give the same result.<br>
    <br>
    "for" loop<br>
    <br>

    ```
    for (int i = 0; i < 5; i++)
    cout << q[i] << endl;
    ```
    Output:
    ```
    2
    4
    6
    8
    10
    ```
    <br>

    **Note:** The program will crash if you put a semi-colon after the parenthesis of the "for" loop.<br>
    WHY??
    ```
    error: ‘i’ was not declared in this scope
    ```
    The way a to print the values of the array elements using loop is that
    - Step 1: Initialize the loop counter

        ```
        int i = 0;
        ```
    - Step 2: Specify the array length in which the counter will loop through

        ```
        i < 5;
    - Step 3: Print the values of the array elements
        ```
        cout << q[i] << endl;
        ```
    - Step 4: Increment the array counter by 1
        ```
        i++
        ```
    <br>

    **Explanation:** Even though the evidence for this explanation has not been confirmed, yet you can think about it this way.<br>
    Our goal here is to print out all the values of the array elements using the loop and the instruction for printing here is
    <br>
    ```
    cout << q[i] << endl;
    ```
    Since the semi-colon ";" is used to marked the end of an instruction<br>
    Therefore, if we put the semi-colon after the parenthesis of the instruction for the loop then the program will understand we want to end the loop instruction there AND the printing instruction is NOT included in the instruction of the "for" loop.<br>
    The loop counter "i" was only declared in the for loop instruction and it was NOT declared in the printing instruction. Therefore, the program will throw the error of
    ```
    error: ‘i’ was not declared in this scope
    ```
    If we put the semi-colon after the parenthesis of the "for" loop.

- printing the array elements with the "foreach" loop (C++ method)
    - Same instruction code for declaration, initialization and assignment as above
        ```
        int B[5] = {1,3,5,7,9};
        int *r;
        r = &B[0];
        ```
        And again, either of these two assignment will work just fine
        ```
        r = B;
        ```
        or
        ```
        r = &B[0];
        ```
    - Foreach loop instruction
        ```
        for(int j:B)
        ```
    - Full code

        ```
        int B[5] = {1,3,5,7,9};
        int *r;
        r = &B[0];

        for(int j:B)
        cout << j << endl;
        ```
        Output:
        ```
        1
        3
        5
        7
        9
        ```

#### 3. Creating array in heap

- **Review:**
    - Whenever you declare anything in your program, it is going to be created inside stack
    - Thus, when you first declared an array in the program, it was created inside the stack.

We can create an array in **heap** by using **pointer**

- There are two steps in dynamically allocating memory space in heap
    - Step 1: Dynamically allocating the space in the memory.
    - Step 2: Dynamically deallocating after using the space in the memory.

- There are two steps in creating an array in heap using dynamic allocation
    - Step 1: Create an array in heap.
    - Step 2: Initialize the array elements.

- Dynamically creating an array in the memory heap
    - Step 1: Declare a pointer variable

        ```
        int *s;
        ```

    - Step 2: Dynamically allocating memory space for the array in heap
        - malloc (C method)

            ```
            (int *)malloc(5 * sizeof(int))
            ```

        - new (C++ method)

            ```
            new int[5];
            ```

        - **Note:**
            - "s" is inside the stack.<br>
            - The array of 5 integers is inside the heap.
    - Step 3: Initializing the array element
        ```
        s[0] = 10; s[1] = 15; s[2] = 14; s[3] = 21; s[4] = 31;
        ```
    - Step 4: Print out the array

        ```
        for (int i = 0; i < 5; i++)
        cout << s[i] << endl;
        ```
    - Step 5: Deallocating the memory space
        - C method

            ```
            free(s);
            ```

        - C++ method

            ```
            delete [] s;
            ```
            - The syntax is: "delete" + data type + variable name.
            - if it is an array subscript then you must write down the subscript.
- **Note:**
    - In small programs, student-sized program, like in this course, it is okay for you to skip/forget to free/delete the allocated space in the memory because once the program ends the heap will be automatically deleted.
    - However, for big projects, it is a very crucial thing to deallocate the memory space at the end of the program.

**It is a good practice to always free/delete after dynamically allocating a memory space.**

#### 4. Value of multiple pointers

Code

Declaring a struct

```
struct Rectangle {
  int length;
  int breadth;
};
```

declaring some variables

```
int *t1;
char *t2;
float *t3;
double *t4;
struct Rectangle *t5;
```
Print out **sizeof** each variable
```
cout << sizeof(t1) << endl;
cout << sizeof(t2) << endl;
cout << sizeof(t3) << endl;
cout << sizeof(t4) << endl;
cout << sizeof(t5) << endl;
```
**Output:**
```
8
8
8
8
8
```
**Question:** The type of each variable is different from one another, why did they print out the same size?<br>
**Answer:** Whatever the data type of a pointer variable maybe, they are taking 8 bytes in the latest 64 bits machines compilers.

**The important thing about pointer:**<br>
The <b>size</b> of the pointer variable is <b>independent</b> from its data type.