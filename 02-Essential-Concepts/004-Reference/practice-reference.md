### LESSON CONTENT
#### 1. Pointer variable versus reference variable
#### 2. Assigning value

=========================
#### 1. Pointer variable versus reference variable
- Reference variable
    ```
    int a = 10;
    int &r;
    ```
    Output:
    ```
    error: ‘r’ declared as reference but not initialized
    ```
- Pointer variable
    ```
    int a = 10;
    int *r;
    ```
    Output: No error

    **Note:** While you don't have to initialize after declaring a pointer variable, you MUST initialize a reference variable after declaring it, otherwise the program will throw an error.
#### 2. Assigning value
- Example 1: Assign a different data variable to a reference

    ```
    int a = 10;
    int &r = a;

    int b = 30;
    r = b;
    ```

    In the code sample above, we assigned the *value* of "a" which was 10 to "r".<br>
    We then assigned the value of "b" to "r" which was 30.<br>

    As we printed out "a", the value is now "30".

    ```
    int a = 10;
    int &r = a;

    int b = 30;
    r = b;

    cout << a;
    ```
    Output:
    ```
    30
    ```
    **Note:** Since "r" was declared and assigned to "a" at first, "r" could not be redeclared, "r" would not be a reference of "b". If you assign "b" to "r" then "r" will store the value "25" of "b" and, since "r" is the reference of "a", so "a" will have the new value of "25".<br>

- Example 2: Assign a different value to a reference

    ```
    int a = 10;
    int &r = a;
    r = 25;

    cout << a << endl << r << endl;
    ```
    Output:
    ```
    25
    25
    ```
    **Explanation:** As you update the value for the reference variable "r", the data variable "a" will also have the same new value because "r" is the reference variable, which is just another name, for the data variable "a".
- **Notes:**
    - Conceptually speaking, a reference name (r) is just another name of the variable (a) whose value is assigned to it, ,therefore, a reference does *not* consume memory even though it will also depend on how the compiler is implemented.
    - In contrast, a pointer variable does consume memory.
    - Some people believe that a reference is like a pointer, however, C++ has a constant pointer which is different from a reference.